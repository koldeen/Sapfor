/************************************************************************************************************
 *	�������� ����� TightlyNestedLoops ������������ ���� Loop												*
 *	������������ ��� �������� ���������� �� ��������� ������ ������.										*
 *																											*
 *	������ ����� ��������� ������ ����� ��������� ������ (����� ������). 									*			
 *	����� �������� ����� ��������� ������, ���� ��������� ������ ������ �� ��������� ������� ����������� � 	*
 *	��������� ����� ������ ����� �� ��������� ������������ ����������.										*
 *	��������� ���� � ��������� (�������) ����� ��������� ����� �������.										*
 *																											*
 *	��� ������� ������ ����� �������� ��������� ����������:													*
 *		- ��������� ���������� ������������ � ������														*
 *		� ��������� �� � ������ ������;																		*
 *		- ������� ������ � ������;																			*
 *		- ���������� � ���������� � ���������� �������;														*
 *		- ���������� �� ������������ � ������ ������.														*
 *																											*
 *	������ ����� ������������� ��������� ���������:															*
 *		- TightlyNestedLoops (int) - �����������, ��� �������� ������ ������,								*
 *		����������� � ���� �������� ����� ��������� ����������.												*
 *		- TightlyNestedLoops* Clone () - ��������� �������� ����������� �������.							*
 *		- IndexVariable* AddIndexVariable (IndexVariable*, bool notClone = false) -							*
 *		���������� �������� ���������, ����� �������� ���������� ������, ��� ������� � ������������,		*	 
 *		�� ��� ���� �������� ������� ������������������.													*
 *		- TightlyNestedLoops* AddNest (int iVarsNumber) - ���������� ���������� ������ ������,				*
 *		����� ���������� ��������� �� ������, ��������������� ������������ ������.							*
 *		- TightlyNestedLoops* SplitNest (int loopsNum) - ��������� ������ �� ���,							*
 *		�� ���������� �� ���� ����� ������ loopsNum ��������� (�� ������� ����������) ������,				*
 *		�� ������ ��������� �����������, ������������ � ���,												*
 *		���������� ��������� ���������� ����� �������� �� ������� ������,									*
 *		����� ���������� ��������� �� ������� ������.														*
 *		- void AddMUFirstUsage (MemoryUnit* mu) - ���������, ��� ������� ������ ������������ � ������ �		*
 *		������������� ����� ������� �������������, �� ��������� �������������, ����������� � ������			*
 *		������������� ������� ������.																		*
 *		- void AddMUFirstUsage (MemoryUnit* mu, MemoryUnitUsage* firstUsage) - ������������� ����� �������	*
 *		������������� ������� ������ � ������,																*		
 *		�������� ������ ������������������ ������������ ����������� ������.									*
 *		- AddMULastUsage () - ������ ����� ���������� ������������� ���� �������� ������,					*
 *		����� ����������� � ������, ������������� �� �� ��������� �������������,							*
 *		����������� � ������ ������������� �������������� ������� ������.									*
 *		- AddMULastUsage (MemoryUnit* mu, MemoryUnitUsage* lastUsage) - ������������� ����� ����������		*
 *		������������� ������� ������ � ������,																*		
 *		�������� ������ ������������������ ������������ ����������� ������.									*
 *		- TightlyNestedLoops* GetExternalNest () - ���������� ��������� �� ������� ������.					*
 *		- int GetInternalNestsNumber () - ���������� ����� �����, ��������������� ��������� (�� �����)		*
 *		� ������ ������.																					*
 *		- TightlyNestedLoops* GetInternalNest (int nestNumber) - ���������� ������, ���������������			*
 *		��������� (�� �����) � ������ � ���������� nestNumber ������� �� �����.								*
 *		- MemoryUnit* GetMemoryUnit (int index) - ���������� index ������� ������.							*
 *		- bool IsUse (MemoryUnit* mu) - ��������� ������������ �� ������� ������ mu � ������.				*
 *		- MemoryUnitUsage* GetFirstUsage (MemoryUnit* mu) - ���������� ��������� �� ������ �������������	*	
 *		������� ������ � ������ ��� NULL.																	*
 *		- MemoryUnitUsage* GetFirstUsage (MemoryUnit* mu) - ���������� ��������� �� ��������� �������������	*	
 *		������� ������ � ������ ��� NULL.																	*
 *		- bool operator== (TightlyNestedLoops& tnl) - ��������� ��������� ��������,							*
 *		��� ������ �����, ���� ��� ������� �� ����� � ��� �� ������.										*
 *		- bool operator!= (TightlyNestedLoops& tnl) - ��������� ��������� ��������,							*
 *		��� ������ �����, ���� ��� ������� �� ����� � ��� �� ������.										*
 *																											*
 *	��� ��������� ������ ������� (DEBUG != 0) �������� �������������� �������:								*
 *		- void Print () - �������� ���������� � ������.														* 
 ************************************************************************************************************/
#ifndef TIGHTLY_NESTED_LOOPS_H
#define TIGHTLY_NESTED_LOOPS_H

#include "debug.h"

#if DEBUG 
	#include "mu_array.h"
	#include "mu_array_usage.h"
	#include "test_dep_cond.h"
#endif

#include "macros.h"
#include "program_unit.h"

namespace Analyzer
{
	namespace Loop
	{
		class TightlyNestedLoops : public ProgramUnit
		{
			IndexVariableCollection *iVars; 						

			TightlyNestedLoops (int iVarsNumber, PUCallRegion* parrentRegion, ProgramUnit* externalPU) : ProgramUnit (parrentRegion)
			{
				this->iVars = new IndexVariableCollection (iVarsNumber);				
				this->externalPU = externalPU; //��� ��� ����������� ����������, ��������: externalNest != NULL - �� �������������			
			}

			TightlyNestedLoops (ProgramUnit* externalNest) : ProgramUnit (externalNest)
			{
				this->iVars = NULL;				
			}		

		public:	
//********************* constructors *************************

			TightlyNestedLoops (int iVarsNumber, PUCallRegion* parrentRegion) : ProgramUnit (parrentRegion)
			{
				this->iVars = new IndexVariableCollection (iVarsNumber);				
			}

			~TightlyNestedLoops ()
			{
				DELETE_POINTER (iVars)				
			}

//********************* tree creation function ******************

			ProgramUnit* Clone () 
			{
				TightlyNestedLoops* temp = new TightlyNestedLoops (externalPU);
				temp->iVars = (IndexVariableCollection*)iVars->Clone ();
				temp->callRegion = callRegion->Clone ();
				temp->musUsage = (RegionUsageCollection*)musUsage->Clone ();
				temp->internalPUs = (ProgramUnitCollection*)internalPUs->Clone ();
				return temp;
			}

			IndexVariable* AddIndexVariable (IndexVariable *iVar, bool notClone = false) 
			{
				CHECK_NULL_POINTER (iVar)
						
				IndexVariable* temp;
				if (notClone) temp = iVar;
				else temp = (IndexVariable*)iVar->Clone();

				iVars->Add(temp);

				return temp;
			}

			TightlyNestedLoops* AddNest (int iVarsNumber)
			{
#if DEBUG & DBG_TREE_CREATE

				cout << "TightlyNestedLoops :: AddNest (int iVarsNumber)" << endl;
				cout << "iVarsNumber = " << iVarsNumber << endl << endl;				
				Print ();
#endif							
				return (TightlyNestedLoops*)(*internalPUs) [internalPUs->Add (new TightlyNestedLoops (iVarsNumber, callRegion, this))];
			}

			TightlyNestedLoops* SplitNest (int loopsNum) 
			{
#if DEBUG & DBG_TREE_CREATE

				cout << "TightlyNestedLoops :: SplitNest (int loopsNum)" << endl;
				cout << "loopsNum = " << loopsNum << endl << endl;
				
				Print ();
#endif
				//������� ������, ������� �� ��������� � �������� (this)
				//��������� ��������� ���������� ����� ����������� �����, ������� �� ������ �� ����� (0)
				TightlyNestedLoops* newNest = new TightlyNestedLoops (externalPU); 
				
				//��������� ��������� ��������� ����������
				//loopsNum - ����� ������ (�� ��������� ����������) �� ���������� ������
				IndexVariableCollection* inIVars = iVars->SplitCollection (loopsNum);				
				newNest->iVars = iVars; 
				iVars = inIVars;				
				
				//������������� ����� ������ ������ � �������
				newNest->internalPUs = new ProgramUnitCollection ();
				newNest->internalPUs->Add (this); 
				
				//������������� ����� �������� ������ � ����� 
				//�������� ��������� (� ��������� �������� ������) �� ������� ������ �� �����
				GetInternalPUs (externalPU)->Update(GetInternalPUs (externalPU)->Find(this), newNest);

				//������������� ����� �������� ������ � �����
				this->externalPU = newNest;

				newNest->musUsage = (RegionUsageCollection*)musUsage->Clone();
				newNest->callRegion = (PUCallRegion*)callRegion->Clone ();

#if DEBUG & DBG_TREE_CREATE

				cout << endl << "external nest: newNest" << endl;
				newNest->Print ();				
				cout << "this:" << endl;
				Print ();
#endif
				return newNest;				
			}

//************************* Get... functions **********************
			int GetLoopsNumber () 
			{				
				return iVars->GetLoopsNumber ();	
			}

			int GetLoopId (int loopsNumber)
			{
				CHECK_INDEX_RANGE (loopsNumber, 0, GetLoopsNumber ())

				int loopId = -1;
				int temp;
				int loopNum = -1;
				for (int i = 0; i < iVars->GetSize (); i++)
				{
					temp = (*iVars) [i]->GetLoopId ();
					if (loopId != temp) 
					{
						loopId = temp;
						loopNum++;
					}
					if (loopsNumber == loopNum) break;
				}

				return loopId;
			}

			IndexVariable* GetIndexVariable (int varId)
			{
				int index = iVars->Find (varId);
				if (index == ELEMENT_NOT_FOUND) return NULL;
				
				return (*iVars)[index];
			}		

			int GetIndexVariableNumbers ()
			{
				return iVars->GetSize ();
			}
			IndexVariable* GetIndexVariable2 (int iVarNumber)
			{
				return (*iVars) [iVarNumber];
			}


//************************* overloaded operators ******************************
			
			bool operator== (ProgramUnit& pu) 
			{
				if (this == &pu) return true;
				
				TightlyNestedLoops* tnl = dynamic_cast <TightlyNestedLoops*> (&pu);

				if (!tnl) return false;
				
				return	*this->iVars == *tnl->iVars;						
			}			

//************************* debug functions ************************************

			void Print ()
			{
#if DEBUG
				cout << "TightlyNestedLoops :: Print ()" << endl;
#endif
				cout << "Tight nest:" << endl;
				cout << iVars->GetLoopsNumber () << " - loops in tight nest" << endl;
				cout << iVars->GetSize () << " - index variables in tight nest" << endl;
				cout << "[loopId : iVarId]: ";
				for (int i = 0; i < iVars->GetSize (); i++)
					cout << "[" << (*iVars) [i]->GetLoopId () << " : " << (*iVars) [i]->GetId () << "] "; 
				cout << endl;				
				cout << internalPUs->GetSize () << " - internal tight nests" << endl;
				cout << musUsage->GetSize () << " - memory units are used" << endl;
			}			
		};	
	}
}

#endif