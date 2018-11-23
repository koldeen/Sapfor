#ifndef TEST_INDEX_LINEAR_2_H
#define TEST_INDEX_LINEAR_2_H

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
		class Linear2IndexTest: public IEPairArrayTest
		{	
			int a, b, c;	
			IndexVariable* iVar;

			int lBound, rBound, step;
			bool isRBConst;

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
					else if (isRBConst)
					{
						if (index <=  MathFunctions :: LeftIntegerPart (rBound - lBound, step))
							dep->SetExistenceCond (DEP_EXIST, DEP_ALWAYS, DEP_EXACTLY);						
						else
							dep->SetExistenceCond (DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);											
					}
					else 
					{
						RangeCondition* cond = new RangeCondition (iVar->GetLoopId (), "rightBound");
						if (step > 0)
							cond->SetLeftBound (index * step + lBound);
						else
							cond->SetRightBound (index * step + lBound);
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
				else if (isRBConst)
				{								
					int lIPart = MathFunctions :: LeftIntegerPart (rBound - lBound, step);
					if (lIPart != 0 && constSolution <= lIPart) //lIPart == 0 => ���� ���������� ������ 1 ���
						dep->SetExistenceCond (DEP_EXIST, DEP_ALWAYS, DEP_EXACTLY);
					else
						dep->SetExistenceCond (DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);
				}							
				else
				{						
					RangeCondition* cond = new RangeCondition (iVar->GetLoopId (), "rightBound");
					
					int bound;

					if (constSolution != 0) //t �������� ���� ������ k_0 - 1, ���� ,���� ������, �� k_0 + 1
						bound = constSolution * step + lBound;
					else 
						bound = (constSolution + 1) * step + lBound;

					if (step > 0)
						cond->SetLeftBound (bound);					
					else
						cond->SetRightBound (bound);					

					dep->SetExistenceCond (DEP_EXIST, cond, DEP_EXACTLY);
				}

				return dep;
				
			}

			// ��� ������� a * k + b * k' = � ����� ��� x_0 + x_1 * t
			// � isRBConst = true
			Dependence* DiffIDepConstRBound ()
			{
				Dependence* dep = new Dependence ();
				int tMin, tMax;

				int u [] = {lEquation->GetFPSolution () * abs (step), lEquation->GetSPSolution () * abs (step)};
				int v [] = {lEquation->GetFGSCoeff () * abs (step),  lEquation->GetSGSCoeff () * abs (step)};
				
				int r = rBound - lBound;
				if (step < 0) r = - r;

				int left [] = {0, 0};
				int right [] = {r, r};								

				LinearInequality2 (2, u, v, left, right, tMin, tMax);	//=> tMin <= t <= tMax
				
				if (tMax > tMin ||	//� [tMin, tMax] ������ ����� ����� => �. �. ����� ����������� ������ ����, �� 
									//�������� �����, � ������� u1 + v1 * t != u2 + v2 * t
					tMax == tMin && //tMin == tMax, �� u1 + v1 * tMin != u2 + v2 * tMin
					MathFunctions :: LinearFunction2 (lEquation->GetFPSolution (),  lEquation->GetFGSCoeff (), tMin) !=
					MathFunctions :: LinearFunction2 (lEquation->GetSPSolution (), lEquation->GetSGSCoeff (), tMin))									
					dep->SetExistenceCond (DEP_EXIST, DEP_ALWAYS, DEP_EXACTLY);								
				else
					dep->SetExistenceCond (DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);

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
					RangeCondition* cond = new RangeCondition (iVar->GetLoopId (), "rightBound");
					if (step > 0)
						cond->SetLeftBound (lBound + lIneq.GetYMin () * step);
					else 
						cond->SetRightBound (lBound + lIneq.GetYMin () * step);
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
				else if (isRBConst)
					return DiffIDepConstRBound ();				
				else 
					return DiffIDepNConstRBound ();			
			}

		public:
			Linear2IndexTest (int testId) : IEPairArrayTest (testId)
			{	
				a = b = c = 1;
				iVar = NULL;
				lEquation = NULL;
			}

			~Linear2IndexTest ()
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

				if (!constLBound || !constStep) return false; //���� ����� �������, ��� ��� �� �����, �� ���� �� ��������

				lBound = constLBound->GetValue ();
				step = constStep->GetValue ();

				if (constRBound) 
				{
					rBound = constRBound->GetValue ();
					isRBConst = true;
				}
				else
					isRBConst = false;				

				return true;
			}

			//��������� � �������������, ��� ���� ���������� ���� �� ���� ���
			TestResult Execute ()
			{	//DBG_START
#if DEBUG & DBG_TEST_LINEAR_2
				cout << "Linear2IndexTest :: Execute ()" << endl;
#endif 				
				if (!IsApplicable ()) return NOT_APPLICABLE;		

				
				//if (isRBConst)
				//{
				//	if ((rBound - lBound) * step < 0) //���� iVar->GetLoopId () �� ��������� �� ����
				//	{
				//		for (int loop = 0; loop < loopsNumber; loop++)
				//		{
				//			dep [loop] = new Dependence ();
				//			dep [loop] ->SetExistenceCond (DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY, NOT_CLONE);
				//		}
				//		return SUCCESS;
				//	}
				//	else
				//		for (int loop = 0; loop < loopsNumber; loop++)						
				//			dep [loop] = new Dependence ();
				//}
				//else 
				//{
				//	RangeCondition* cond = new RangeCondition (iVar->GetLoopId (), "rightBound");
				//	if (step > 0) 
				//		cond->SetRightBound (lBound - 1);
				//	else 
				//		cond->SetLeftBound (lBound + 1);				

				//	for (int loop = 0; loop < loopsNumber; loop++)
				//	{
				//		dep [loop] = new Dependence ();
				//		dep [loop]->SetExistenceCond (DEP_NOT_EXIST, cond, DEP_NOT_EXACTLY, NOT_CLONE);
				//	}
				//}

				//Dependence* depUpper = new Dependence ();//(Dependence*)dep [0]->Clone (); //����� ������, ������� ���������� ������������
				//Dependence* depInner = new Dependence ();//(Dependence*)dep [0]->Clone (); //���������� �����

//if (step == 0) - ?
				//������� ������ i = lBound + step * j,
				//����� �������� ��������� � ���� a * k + b * k' = c, ��� k, k' - ������ �������� (��. ������) 
				c -= a * lBound + b * lBound; //������������ ������ ��������
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

					
#if DEBUG & DBG_TEST_LINEAR_2
				cout << endl << "!!!!!!!!!!!!RESULT!!!!!!!!!!!" << endl;
				cout << a << " * iVar + " << b << " * iVar' = " << c << endl;
				cout << "iVarId: " << iVar->GetId ();
				cout << " iVarLoopId: " << iVar->GetLoopId () << endl;

				for (int i = 0; i < loopsNumber; i++)
				{					
					cout << "loop: " << i << " loopId: " << pu->GetLoopId (i) << endl;				

					dep[i]->Print ();
				}
				cout << "!!!!!!!!!!END RESULT!!!!!!!!!" << endl << endl;
#endif
								
				return SUCCESS;
			}
		};
	}
}

#endif