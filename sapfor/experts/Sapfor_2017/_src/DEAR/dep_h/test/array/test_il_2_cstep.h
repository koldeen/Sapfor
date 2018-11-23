#ifndef TEST_I_L_2_CONST_STEP_H
#define TEST_I_L_2_CONST_STEP_H

#include "math.h"
#include "stdio.h"

#include "debug.h"

#include "test.h"
#include "test_usages.h"
#include "mu_array_usage.h"

#include "isg_expression.h"
#include "linear_expression.h"
#include "int_expression.h"

#include "test_dependence.h"
#include "test_dep_range_cond.h"
#include "test_index_info.h"

#include "math_functions.h"
#include "math_le_two_var.h"
#include "math_slie_tv_param.h"

#include "main_exception.h"

using namespace Mathematics;
using namespace Expression;

namespace Analyzer
{
	namespace Test
	{
		class Linear2CStepIndexTest: public IEPairArrayTest
		{	
			int a, b, c;	
			IndexVariable* iVar;

			int step;			

			LETwoVariable* lEquation;			

			//����� ��������� ���������� � ��������������� � �� varId 
			//� ������ ����� ��������� ������ 
			//���� ����� �������� ���������� ������������ �� ������ ������ � ����
			bool  IsUpper (int varId, TightlyNestedLoops* tNLoops)
			{
				if (!tNLoops) return false;
				if (tNLoops->GetIndexVariable (varId)) return true;					

				return IsUpper (varId, dynamic_cast <TightlyNestedLoops*> (tNLoops->GetExternalPU ()));
			}	

			
			//left[i] <= u[i] + v[i] * t <= right[i] , 0 <= i < ineqNum
			void LinearInequality2 (int ineqNum, int u[], int v[], int left [], int right [], int& tMin, int& tMax)
			{
				if (v[0] > 0)
				{
					tMin = MathFunctions :: RightIntegerPart (left[0] - u [0], v [0]);
					tMax = MathFunctions :: LeftIntegerPart (right[0] - u [0], v [0]);
				}
				else
				{
					tMin = MathFunctions :: RightIntegerPart (right[0] - u [0], v [0]);
					tMax = MathFunctions :: LeftIntegerPart (left[0] - u [0], v [0]);
				}

				for (int i = 1; i < ineqNum; i++)
				{
					if (v[i] > 0)
					{
						tMin = max (tMin, MathFunctions :: RightIntegerPart (left[i] - u [i], v [i]));
						tMax = min (tMax, MathFunctions :: LeftIntegerPart (right[i] - u [i], v [i]));
					}
					else
					{
						tMin = max (tMin, MathFunctions :: RightIntegerPart (right[0] - u [0], v [0]));
						tMax = min (tMax, MathFunctions :: LeftIntegerPart (left[0] - u [0], v [0]));
					}
				}

			}

			// (a + b) * k = c
			// 0 <= k <= (constRBound->GetValue () - lBound) / step
			// � ������������� ��� ���� ���������� ���� �� ���� ���
			Dependence* SameIterationDep ()
			{
				Dependence* dep = new Dependence ();

				if (a + b == 0)
				{
					if (c == 0) //k - �����					
						dep->SetExistenceCond (DEP_EXIST, DEP_ALWAYS, DEP_EXACTLY);						
					else //������� ���
						dep->SetExistenceCond (DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);
				}
				else if (c % (a + b) != 0)
					dep->SetExistenceCond (DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);
				else  
				{
					int index = c / (a + b);
					if (index < 0)
						dep->SetExistenceCond (DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);											
					else 
					{
						RangeCondition* cond = new RangeCondition (iVar->GetLoopId (), "rBound - lBound");
						if (step > 0)
							cond->SetLeftBound (index * step);
						else
							cond->SetRightBound (index * step);
						dep->SetExistenceCond (DEP_EXIST, cond, DEP_EXACTLY, NOT_CLONE);
					}
				}					
				return dep;
			}


			// ������� a * k + b * k' = � ����� ��� k = k_0, k' = t ��� k = st, k'= k'_0
			// ��������� t
			Dependence* DiffIDepConstSolution (int constSolution) //constSolution - ������e-���������
			{
				Dependence* dep = new Dependence ();

				if (constSolution < 0)	
					dep->SetExistenceCond (DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);							
				else
				{						
					RangeCondition* cond = new RangeCondition (iVar->GetLoopId (), "rBound - lBound");
					
					int bound;

					if (constSolution != 0) //t �������� ���� ������ k_0 - 1, ���� ,���� ������, �� k_0 + 1
						bound = constSolution * step;
					else 
						bound = (constSolution + 1) * step;

					if (step > 0)
						cond->SetLeftBound (bound);					
					else
						cond->SetRightBound (bound);					

					dep->SetExistenceCond (DEP_EXIST, cond, DEP_EXACTLY);
				}

				return dep;				
			}			

			// ��� ������� a * k + b * k' = � ����� ��� x_0 + x_1 * t
			// � isRBConst = false
			Dependence* DiffIDepNConstRBound ()
			{		
				Dependence* dep = new Dependence ();
				
				SLIneqTVParameter lIneq (lEquation->GetFPSolution (), lEquation->GetFGSCoeff (), lEquation->GetSPSolution (), lEquation->GetSGSCoeff ());
				
				if (!lIneq.IsSolutionExist ()) 
					dep->SetExistenceCond (DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);
				else
				{
					RangeCondition* cond = new RangeCondition (iVar->GetLoopId (), "rBound - lBound");
					if (step > 0)
						cond->SetLeftBound (lIneq.GetYMin () * step);
					else 
						cond->SetRightBound (lIneq.GetYMin () * step);
					dep->SetExistenceCond (DEP_EXIST, cond, DEP_EXACTLY);												
				}

				return dep;
			}

			//������ a * k + b * k' = c											
			// 0 <= k, k' <= (constRBound->GetValue () - lBound) / step
			//k != k'
			// � ������������� ��� ���� ���������� ���� �� ���� ���
			Dependence* DiffIterationDep ()
			{
				if (!lEquation->IsSolutionExist () ||
					(lEquation->GetFPSolution () == lEquation->GetSPSolution () &&  //������� ��������� �������
					lEquation->GetFGSCoeff () == lEquation->GetSGSCoeff ()))
				{
					Dependence* dep = new Dependence ();
					dep->SetExistenceCond (DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);				
          return dep;
				}
				else if (lEquation->GetFGSCoeff () == 0) //k = k_0 && k' = t
					return DiffIDepConstSolution (lEquation->GetFPSolution ());
				else if (lEquation->GetSGSCoeff () == 0) //k = t && k' = k'_0
					return DiffIDepConstSolution (lEquation->GetSPSolution ());
						
				else 
					return DiffIDepNConstRBound ();			
			}

		public:
			Linear2CStepIndexTest (int testId) : IEPairArrayTest (testId)
			{	
				a = b = c = 1;
				iVar = NULL;
				lEquation = NULL;
			}

			~Linear2CStepIndexTest ()
			{
				iVar = NULL;

				DELETE_POINTER (lEquation);
			}

			bool IsApplicable ()
			{			
#if DEBUG & DBG_TEST_LINEAR_2
				cout << "Linear2IndexTest :: IsApplicable ()" << endl;
#endif 
				IEPairArrayTest :: IsApplicable ();

				if (mu->IsScalar ()) return false;	

				IndexVariable* iVar1 = NULL;
				IndexVariable* iVar2 = NULL;

				IntegerValue* coeff1 = NULL;
				IntegerValue* coeff2 = NULL;
			
				IntegerValue* freeTerm1 = NULL;
				IntegerValue* freeTerm2 = NULL;			

				LinearExpression* iLExpr1 = NULL;
				LinearExpression* iLExpr2 = NULL;						

				IExpression* expr1 = NULL;
				IExpression* expr2 = NULL;							
			
				expr1 = prevAUsage->GetIndexExpr (dim);
				expr2 = postAUsage->GetIndexExpr (dim);
				if (!expr1 || !expr2) return false;

				iLExpr1 = dynamic_cast <LinearExpression*> (expr1);
				iLExpr2 = dynamic_cast <LinearExpression*> (expr2);

				if (!iLExpr1)
				{
					//��������, ��� ������ ���������
					freeTerm1 = dynamic_cast <IntegerValue*> (expr1);
					if (!freeTerm1) return false;

					if (!iLExpr2) return false; //�� ������� ���� ���� ��������� ������ ���� ��������					
				}
				else if (iLExpr1->GetVariablesNumber () == 1)
				{
					iVar1 = dynamic_cast <IndexVariable*> (iLExpr1->GetVariable (0));					
					coeff1 = dynamic_cast <IntegerValue*>  (iLExpr1->GetCoeffitient (0));
					freeTerm1 = dynamic_cast <IntegerValue*> (iLExpr1->GetFreeTerm ());	
					
					if (!iVar1 || !coeff1 || !freeTerm1) return false;	
				}
				else return false;
				
				if (!iLExpr2)
				{
					//��������, ��� ������ ���������
					freeTerm2 = dynamic_cast <IntegerValue*> (expr2);
					if (!freeTerm2) return false;

					if (!iLExpr1) return false; //�� ������� ���� ���� ��������� ������ ���� ��������
				} 
				else if (iLExpr2 && iLExpr2->GetVariablesNumber () == 1)
				{
					iVar2 = dynamic_cast <IndexVariable*> (iLExpr2->GetVariable (0));
					coeff2 = dynamic_cast <IntegerValue*>  (iLExpr2->GetCoeffitient (0));
					freeTerm2 = dynamic_cast <IntegerValue*> (iLExpr2->GetFreeTerm ());

					if (!iVar2 || !coeff2 || !freeTerm2) return false;
				}				
				else return false;				

				if (iVar1 && iVar2 && iVar1->GetId () != iVar2->GetId ()) return false; //���� ������ id, �� ���� �� ��������

				c = freeTerm2->GetValue () - freeTerm1->GetValue ();				

				if (iVar1) a = coeff1->GetValue ();
				else a = 0;
				
				if (iVar2) b = - coeff2->GetValue ();		
				else b = 0;

				//�� ������� ���� ���� �� ��� �� NULL
				//Id - ����������
				if (iVar1) iVar = iVar1;
				else iVar = iVar2;

				IntegerValue* constLBound = dynamic_cast<IntegerValue*> (iVar->GetLeftBound ());				
				IntegerValue* constRBound = dynamic_cast <IntegerValue*> (iVar->GetRightBound ());
				IntegerValue* constStep = dynamic_cast<IntegerValue*> (iVar->GetStep ());

				if (a + b != 0 &&	//������������ ��� ��������� ���������� ������ ���� ���������
					a * b != 0)		//��� ���� �� ��� ������ ���� �����
					return false; 
											
				if (!constStep) return false; //���� ����� �������, ��� ��� �� �����, �� ���� �� ��������
				
				step = constStep->GetValue ();
				
				return true;
			}

			//��������� � �������������, ��� ���� ���������� ���� �� ���� ���
			TestResult Execute ()
			{	//DBG_START
#if DEBUG & DBG_TEST_LINEAR_2
				cout << "Linear2IndexTest :: Execute ()" << endl;
#endif 				
				if (!IsApplicable ()) return NOT_APPLICABLE;						
				
				//������� ������ i = lBound + step * j,
				//����� �������� ��������� � ���� a * k + b * k' = c, ��� k, k' - ������ �������� (��. ������) 
				//c �� ���������, ��� ��� a + b == 0
				a *= step;
				b *= step;				

				DELETE_POINTER (lEquation)

				lEquation = new LETwoVariable (a, b, c);
				lEquation->Solve ();

				Dependence* sameItDep = SameIterationDep ();
				Dependence* diffItDep = DiffIterationDep ();
				
				//iVarLoopNum - ����� �����, � ������� ���������� iVar
				//-1, ���� iVar ����������� ���������� �������.
				//loopsNumber, ���� ����������� ���������� �������.
				int iVarLoopNum = -1; 				

				if (!pu->GetIndexVariable (iVar->GetId ()))
					if (IsUpper (iVar->GetId (), dynamic_cast <TightlyNestedLoops*> (pu->GetExternalPU ())))
						iVarLoopNum = -1;
					else
						iVarLoopNum = loopsNumber;
				else 
				{			
					int loopId;
					TightlyNestedLoops* tnl = dynamic_cast <TightlyNestedLoops*> (pu);
					if (tnl)
					{
						for (	iVarLoopNum = 0, loopId = tnl->GetLoopId (iVarLoopNum); 
								loopId != iVar->GetLoopId (); 
								iVarLoopNum++, loopId = tnl->GetLoopId (iVarLoopNum));
					}
					else iVarLoopNum = 0; //������� �� ���������� ��������
				}				

				//��������� ����� �� ������ pu, ������������ ���� iVar->GetLoopId ().
				//� prevUsage � postUsage iVar ����� ���� ��� ����������, ��� � ������.		
				for (int loop = 0; loop < iVarLoopNum; loop++)
					dep [loop] = (Dependence*)sameItDep->UnionIntersect (diffItDep, DEP_EXIST)->Clone ();			

				//T�������� �� ����������� ���� �� ������ pu, � ������� ������� iVar.
				//� prevUsage � postUsage iVar ������ ��������� ������ ��������.
				if (iVarLoopNum > -1 && iVarLoopNum < loopsNumber)
					dep [iVarLoopNum] = diffItDep;

				//��������� ����� �� ������ pu, ��������� � ���� iVar->GetLoopId ().
				//� prevUsage � postUsage iVar ������ ���� ����������.	
				//a * i + b * i = c
				for (int loop = iVarLoopNum + 1; loop < loopsNumber; loop++)
					dep [loop] = (Dependence*)sameItDep->Clone ();		

				DELETE_POINTER (sameItDep)				
	
				return SUCCESS;
			}
		};
	}
}

#endif