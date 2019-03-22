/********************************************************************************************************
 *	����� PURoutine ����������� �� ������ ProgramUnit � ��������� ������������ (��������� � �������),	*
 *	������������ � ���������.																			*
 *																										*
 *	��������������� ���������:																			*		
 *	- PURoutine (int routineId, int paramsNumber) - ������� ��������� � ��������������� � �� routineId  *
 *	� ������ ���������� ���������� paramsNumber.														*
 *	- AddFormalParameter (MemoryUnit* mu) - ��������� ���������� ��������� � �������� ���������.		*
 *	���������� ������ ����������� � ������� ���������� ��������� � ��������� ���������.					*
 *	��������� mu - ��������� �� ������ MemoryUnit, ������� ����� ����� ������ (���� �� ������������)	*
 *	� ������ ������������ � ��������� �������� ������ MemoryUnit.										*	
 *	- TightlyNestedLoops* AddNest (int iVarsNumber) - ��������� ����� ��������� ������ � ������������.	*
 *	- int GetId () - ���������� ������������� ������������ � ��.										*
 *	- int GetParamsNumber () - ���������� ����� ���������� ���������� ������������.						*
 ********************************************************************************************************/
#ifndef PU_ROUTINE_H
#define PU_ROUTINE_H

#include "program_unit.h"
#include "mu_collection.h"
#include "tn_loops.h"
#include "macros.h"

namespace Analyzer
{
	namespace Loop
	{
		class PURoutine : public ProgramUnit
		{
			int routineId;
			MemoryUnitCollection* params;

			PURoutine (int routineId, ProgramUnit* externalNest) : ProgramUnit (externalNest)
			{
				this->routineId = routineId;				
				this->params = NULL;				
			}

		public:
//********************************* constructors *********************************
			PURoutine (int routineId, int paramsNumber) : ProgramUnit ()
			{
				this->routineId = routineId;
				params = new MemoryUnitCollection (paramsNumber);
			}

			~PURoutine ()
			{
				DELETE_POINTER (params)					
			}

//**************************** tree creation methods *****************************
			ProgramUnit* Clone ()
			{
				PURoutine * temp = new PURoutine(routineId, externalPU);				
				temp->musUsage = (RegionUsageCollection*)musUsage->Clone ();
				temp->internalPUs = (ProgramUnitCollection*)internalPUs->Clone ();
				temp->params = (MemoryUnitCollection*)params->Clone ();
				
				return temp;
			}

			void AddFormalParameter (MemoryUnit* mu) 
			{		
				params->Add (mu); //� ��������� �� ����� ���� NULL-����������, �������� ������.			

				return;
			}

			TightlyNestedLoops* AddNest (int iVarsNumber)
			{
				TightlyNestedLoops* tnl = new TightlyNestedLoops (iVarsNumber, callRegion);
				SetExternalPU (tnl, this);

				return (TightlyNestedLoops*)(*internalPUs) [internalPUs->Add (tnl)];
			}		
//****************************** Set... methods **********************************
            void SetParamsNumber(int paramsNumber)
			{ 
				DELETE_POINTER (this->params)

				this->params = new MemoryUnitCollection (paramsNumber);				
            } 

//****************************** Get... methods **********************************
			int GetId () {return routineId;}

			int GetParamsNumber () {return params->GetAllocatedSize ();}

			MemoryUnit* GetParameter (int index) {return (*params) [index];}


			int GetLoopsNumber () 
			{				
				int loopsNumber = 0;
				for (int i = 0; i < GetParamsNumber (); i++)
					if ((*params) [i]->IsScalar ()) loopsNumber++;

				if (loopsNumber == 0) loopsNumber++;

				return loopsNumber;
			}

			IndexVariable* GetIndexVariable (int varId)
			{
				int index = params->Find(varId);
				if (index == ELEMENT_NOT_FOUND) return NULL;
				
				return NULL;//(*params)[index]; ��������
			}				

			bool operator== (ProgramUnit& pu)
			{
				if (this == &pu) return true;
				
				PURoutine* pur = dynamic_cast <PURoutine*> (&pu);	
				if (!pur) return false;

				if (routineId != pur->GetId ()) return false;
				
				return	*this->params == *pur->params;	
			}

			void Print ()
			{	
#if DEBUG
				cout << "PURoutine :: Print ()" << endl;
#endif
				cout << GetId () << " - id" << endl;	
				cout << internalPUs->GetSize () << " - internal tight nests" << endl;
				cout << musUsage->GetSize () << " - memory units are used" << endl;

				cout << GetParamsNumber () << " - formal parameters in routine" << endl;												
				for (int i = 0; i < params->GetSize (); i++)
				{
					cout << endl << i + 1 << " formal parameter" << endl;
					ProgramUnit :: Print((*params)[i]);
				}
					
				
			}

		};
	}
}

#endif