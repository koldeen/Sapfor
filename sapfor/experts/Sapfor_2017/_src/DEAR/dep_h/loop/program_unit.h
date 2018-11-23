/************************************************************************************************************
 *	����� ProgramUnit �������� ������� ��� �������, ���������� ������ ������ ���������.						*
 *	��������� ����� ��� ��. � ������ ������ ��� ����������� �������� ����������:							*
 *	����, ���������, �������, �����.																		*
 *																											*
 *	������ ����� ������������� ��������� ���������:															*
 *		- ProgramUnit () - �����������, ��� �������� �������.												*
 *		- ProgramUnit* Clone () - ��������� �������� ����������� �������.									* 		
 *		- TightlyNestedLoops* AddNest (int iVarsNumber) - ���������� ���������� ������ ������,				*
 *		����� ���������� ��������� �� ������, ��������������� ������������ ������.							* 
 *		- void AddMUFirstUsage (MemoryUnit* mu) - ���������, ��� ������� ������ ������������ � �� �			*
 *		������������� ����� ������� �������������, �� ��������� �������������, ����������� � ������			*
 *		������������� ������� ������.																		*
 *		- void AddMUFirstUsage (MemoryUnit* mu, MemoryUnitUsage* firstUsage) - ������������� ����� �������	*
 *		������������� ������� ������ � ��,																	*		
 *		�������� ������ ������������������ ������������ ����������� ������.									*
 *		- AddMULastUsage () - ������ ����� ���������� ������������� ���� �������� ������,					*
 *		����� ����������� � ��, ������������� �� �� ��������� �������������,								*
 *		����������� � ������ ������������� �������������� ������� ������.									*
 *		- AddMULastUsage (MemoryUnit* mu, MemoryUnitUsage* lastUsage) - ������������� ����� ����������		*
 *		������������� ������� ������ � ��,																	*		
 *		�������� ������ ������������������ ������������ ����������� ������.									*
 *		- ProgramUnit* GetExternalNest () - ���������� ��������� �� ������� ��.								*
 *		- int GetInternalNestsNumber () - ���������� ����� �� ��������� � ������ ��.						*	
 *		- ProgramUnit* GetInternalNest (int puNumber) - ���������� ��, ��������������� ��������� � ������	*
 *		� ���������� puNumber �� �� �����.																	*
 *		- MemoryUnit* GetMemoryUnit (int index) - ���������� index ������� ������.							*
 *		- bool IsUse (MemoryUnit* mu) - ��������� ������������ �� ������� ������ mu � ������.				*
 *		- MemoryUnitUsage* GetFirstUsage (MemoryUnit* mu) - ���������� ��������� �� ������ �������������	*	
 *		������� ������ � ������ ��� NULL, ���� mu �� ������������.											*
 *		- MemoryUnitUsage* GetFirstUsage (MemoryUnit* mu) - ���������� ��������� �� ��������� �������������	*	
 *		������� ������ � �� ��� NULL, ���� mu �� �����������.												*
 *		- bool operator== (ProgramUnit& tnl) - ��������� ��������� ��������,								*
 *		��� ������ �����, ���� ��� ������� �� ����� � ��� �� ������.										*
 *		- bool operator!= (Program& tnl) - ��������� ��������� ��������,									*
 *		��� ������ �����, ���� ��� ������� �� ����� � ��� �� ������.										*
 *																											*
 *	��� ��������� ������ ������� (DEBUG != 0) �������� �������������� �������:								*
 *		- void Print () - �������� ���������� � ������.														* 
 ************************************************************************************************************/

#ifndef PROGRAM_UNIT_H
#define PROGRAM_UNIT_H

#include "debug.h"

#include "mu_array.h"
#include "mu_array_usage.h"
#include "test_dep_cond.h"


#include "pu_collection.h"
#include "pu_call_region.h"

#include "tnl_ru_collection.h"
#include "tnl_exception.h"

#include "memory_unit.h"
#include "test_dep_info.h"

#include "ivar_collection.h"

using namespace Analyzer :: Memory;
using namespace Analyzer :: Test :: Dependences;

namespace Analyzer
{
	namespace Loop
	{
		class PURoutine;

		class ProgramUnit
		{
		protected:
			RegionUsageCollection *musUsage;
			PUCallRegion* callRegion;			
			ProgramUnitCollection *internalPUs;		
			ProgramUnit *externalPU;	
			bool isTested;
	
			ProgramUnit (ProgramUnit* externalPU)
			{				
				this->musUsage = NULL;				
				this->callRegion = NULL;
				this->internalPUs = NULL;
				this->externalPU = externalPU;
				this->isTested = false;
			}		

			//��������� ������ ��������� ������� �� ������ � protected ������
			ProgramUnitCollection* GetInternalPUs (ProgramUnit* pu)
			{
				CHECK_NULL_POINTER (pu)
				return pu->internalPUs;
			}

			void SetInternalPUs (ProgramUnit* pu, ProgramUnitCollection* puColl)
			{
				CHECK_NULL_POINTER (pu)					
				pu->internalPUs = puColl;
			}

			void SetExternalPU (ProgramUnit* pu, ProgramUnit* externalPU)
			{
				CHECK_NULL_POINTER (pu)
				pu->externalPU = externalPU;;
			}

			PUCallRegion* GetPUCallRegion (ProgramUnit* pu)
			{
				CHECK_NULL_POINTER (pu)
				return pu->callRegion;
			}

			void SetPUCallRegion (ProgramUnit* pu, PUCallRegion* callRegion)
			{
				CHECK_NULL_POINTER (pu)
				pu->callRegion = callRegion;
			}

		public:	
//********************************* constructors *********************************
			ProgramUnit ()
			{				
				this->musUsage =  new RegionUsageCollection ();				
				this->callRegion = new PUCallRegion ();
				this->internalPUs = new ProgramUnitCollection ();				
				this->externalPU = NULL;
				this->isTested = false;
			}

			ProgramUnit (PUCallRegion* parrentRegion)
			{				
				this->musUsage =  new RegionUsageCollection ();				
				this->callRegion = new PUCallRegion (parrentRegion);
				this->internalPUs = new ProgramUnitCollection ();				
				this->externalPU = NULL;
				this->isTested = false;
			}

			virtual ~ProgramUnit ()
			{				
				DELETE_POINTER (musUsage)				
				DELETE_POINTER (callRegion)
				DELETE_POINTER (internalPUs)
				DELETE_POINTER (externalPU)			
			}
//**************************** tree creation function ****************************

			virtual ProgramUnit* Clone () 
			{
				ProgramUnit* temp = new ProgramUnit (externalPU);				
				temp->musUsage = (RegionUsageCollection*)musUsage->Clone ();				
				temp->callRegion = callRegion->Clone ();
				temp->internalPUs = (ProgramUnitCollection*)internalPUs->Clone ();
				temp->isTested = isTested;
				
				return temp;
			}		

			void AddMUFirstUsage (MemoryUnit* mu) 
			{
				CHECK_NULL_POINTER (mu)

				AddMUFirstUsage (mu, mu->GetLastUsage());				
			}

			void AddMUFirstUsage (MemoryUnit* mu, MemoryUnitUsage* firstUsage) 				
			{
				CHECK_NULL_POINTER (mu)
				CHECK_NULL_POINTER (firstUsage)
				//�������� �� �������������� firstUsage ������ ������������� mu �� ��������
	
				RegionUsage* temp = new RegionUsage (mu, GetLoopsNumber ());
				
				temp->SetFirstUsage (firstUsage);
				musUsage->Add (temp);
				if (externalPU && !externalPU->IsUse (mu)) externalPU->AddMUFirstUsage(mu, firstUsage);
			}

			void AddMULastUsage () 
			{
				RegionUsage *temp;
				for (int i = 0; i < musUsage->GetSize (); i++)
				{
					temp = (*musUsage)[i];
					temp->SetLastUsage(temp->GetMemoryUnit()->GetLastUsage());
				}
			}

			void AddMULastUsage (MemoryUnit* mu, MemoryUnitUsage* lastUsage) 
			{
				CHECK_NULL_POINTER (mu)
				CHECK_NULL_POINTER (lastUsage)
				//�������� �� �������������� lastUsage ������ ������������� mu �� ��������

				RegionUsage* temp = (*musUsage) [mu];
				if (!temp) 
				{
					AddMUFirstUsage (mu, lastUsage); 
					temp = (*musUsage) [mu]; //�������� ������ ������������������ ��-�� ��������������� ������
				}
				temp->SetLastUsage (lastUsage);
			}

			/*void AddRoutineCall (PURoutine* routine, MemoryUnitUsage** params, bool notClone = false)
			{		
				PURoutineCall* temp = new PURoutineCall (routine, params, notClone);
				
				callRegion->AddNextRoutineCall (temp);

				ProgramUnit* pu = this;
				
				while (pu->externalPU && !pu->callRegion->GetFirstRoutineCall ())
				{
					pu->callRegion->StartRegion ();
					pu = pu->externalPU;
				}
			}*/

			PURoutineCall* AddRoutineCall (PURoutine* routine)
			{				
				PURoutineCall* temp =  new PURoutineCall (routine);
				
				callRegion->AddNextRoutineCall (temp);
				if (!this->callRegion->GetFirstRoutineCall ())
					this->callRegion->StartRegion ();

				ProgramUnit* pu = this->GetExternalPU ();
				
				if (pu)
				{
					while (pu->externalPU && !pu->callRegion->GetFirstRoutineCall ())
					{	
						pu->callRegion->StartRegion ();
						pu = pu->externalPU;					
					}
				}

				return temp;
			}

			void CloseProgramUnit ()
			{
				AddMULastUsage ();
				if (callRegion->GetFirstRoutineCall ())
					callRegion->EndRegion (); //��������� ������, ���� �������
			}
//********************************* Get... methods *******************************
			virtual int GetLoopsNumber () {return 1;}

			virtual IndexVariable* GetIndexVariable (int varId) {return NULL;}
			ProgramUnit* GetExternalPU () {return externalPU;}			

			int GetInternalPUsNumber () {return this->internalPUs->GetSize ();}

			ProgramUnit* GetInternalPU (int puNumber) 
			{
				CHECK_INDEX_RANGE (puNumber, 0, GetInternalPUsNumber ())
				return (*internalPUs)[puNumber];
			}			

			ProgramUnit* GetNextInternalPU (ProgramUnit* iPUnit)
			{
				int index = internalPUs->Find (iPUnit);
				if (index == ELEMENT_NOT_FOUND) throw Exception :: TNLoopsException ("Nest doesn't exists");
				index++;
				if (index >= GetInternalPUsNumber ()) return NULL;
				else return (*internalPUs)[index];
			}

			int GetMemoryUnitsNumber () {return musUsage->GetSize ();}

			MemoryUnit* GetMemoryUnit (int index) 
			{
				CHECK_INDEX_RANGE (index, 0, GetMemoryUnitsNumber ())
				return (*musUsage) [index]->GetMemoryUnit ();
			}

			MemoryUnit* GetNextMemoryUnit (MemoryUnit* mu)
			{
				RegionUsage* temp = (*musUsage) [mu];
				if (!temp) throw Exception :: TNLoopsException ("Memory unit doesn't exists");

				int index = musUsage->Find (temp);
				index++;
				if (index >= GetMemoryUnitsNumber ()) return NULL;
				else return GetMemoryUnit (index);

			}
			bool IsUse (MemoryUnit* mu) 
			{
				return (*musUsage) [mu] != NULL;
			}					

			MemoryUnitUsage* GetFirstUsage (MemoryUnit* mu)
			{
				RegionUsage* temp = (*musUsage) [mu];
				if (!temp) return NULL;
				else return temp->GetFirstUsage ();				
			}

			MemoryUnitUsage* GetLastUsage (MemoryUnit* mu)
			{
				RegionUsage* temp = (*musUsage) [mu];
				if (!temp) return NULL;
				else return temp->GetLastUsage ();
			}

			PURoutineCall* GetFirstRoutineCall ()
			{
				return callRegion->GetFirstRoutineCall ();
			}

			PURoutineCall* GetLastRoutineCall ()
			{
				return callRegion->GetLastRoutineCall ();
			}

			PURoutineCall* GetRoutineCall (int index)
			{
				return callRegion->GetRoutineCall (index);
			}

			int GetRoutineCallsNumber ()
			{
				return callRegion->GetCallsNumber ();
			}

//************************* dependence information functions *********************	

			DepTestInfo* GetDepTestInfo (MemoryUnit* mu) 
			{
				if (!IsUse (mu)) throw Exception :: TNLoopsException ("mu not use in nest");
				return (*musUsage) [mu]->GetDepTestInfo (); 				
			}

			IDependence* GetDependence (MemoryUnit* mu, int loop) 
			{
				RegionUsage* temp = (*musUsage) [mu];
				if (temp) return temp->GetDepTestInfo ()->GetDependence (loop);
				else return NULL;
			}						
			void SetIsTested () {isTested = true;}
			bool GetIsTested () {return isTested;}
//************************* overloaded operators *********************************
			
			virtual bool operator== (ProgramUnit& pu) 
			{
				if (this == &pu) return true;

				return false;
			}		

			virtual bool operator!= (ProgramUnit& pu) 
			{
				return !(*this == pu);
			}

//************************* output functions **************************************

			virtual void Print ()
			{
#if DEBUG
				cout << "ProgramUnit :: Print ()" << endl;
#endif
			}

			void Print (MemoryUnit* mu)
			{
#if DEBUG
				cout << "ProgramUnit :: Print (MemoryUnit* mu)" << endl;
#endif
				if (!mu) 
				{
					cout << "error: mu is null" << endl;
					return;
				}						
				cout << mu->GetVarsNumber () << " - ids:";
				for (int j = 0; j < mu->GetVarsNumber (); j++)
					cout << " " << mu->GetVarsId (j);
				cout << endl;

				cout << "type: ";
				if (mu->IsScalar ())
					cout << "scalar" <<endl;
				else 
				{
					cout << "array" <<endl;
					ArrayUnit* au = (ArrayUnit*) mu;
					cout << au->GetDimsNumber () << " - number of dims" << endl;
				}

				RegionUsage* ru = (*musUsage) [mu];

				if (!ru) 
				{
					cout << "memory unit is not use" << endl;
					return;
				}

				MemoryUnitUsage* temp = NULL;

				cout << "usage: ";
				temp = ru->GetFirstUsage ();
				if (!temp) cout << "first usage is null" << endl;
				while (temp && temp != ru->GetLastUsage ())
				{
					switch (temp->GetUsageType ())
					{
					case NOT_USAGE: cout << "N "; break;
					case READ: cout << "R "; break;
					case WRITE: cout << "W "; break;
					case UNKNOWN: cout << "U "; break;
					}
					temp = temp->GetNextUsage ();
				}
				if (!temp) cout << "\nlast usage is null" << endl;
				else 
				{
					switch (temp->GetUsageType ())
					{
					case NOT_USAGE: cout << "N "; break;
					case READ: cout << "R "; break;
					case WRITE: cout << "W "; break;
					case UNKNOWN: cout << "U "; break;
					} 
					cout << endl;
				}		

				IDependence* dep = NULL;			
				
				cout << "Dependences: " << endl;
				for (int loop = 0; loop < GetLoopsNumber (); loop++)
				{
					cout << "loop: " << loop << endl;
					dep = GetDependence (mu, loop);
					((Dependence*)dep)->Print ();					
				}			
			}


			void Print (PURoutineCall* rCall)
			{
#if DEBUG
				cout << "ProgramUnit :: Print (PURoutineCall*)" << endl;								
#endif
				((ProgramUnit*)rCall->GetRoutine ())->Print ();
				for (int i = 0; i < rCall->GetParamsNumber (); i++)
				{
					cout << endl << i << " - parameter";
					if (!rCall->GetParameter (i)) cout << " is not reference" << endl;
					else
					{
						cout << endl;
						Print (rCall->GetParameter (i));						
					}
					
				}
			}
			void PrintAll ()
			{
#if DEBUG
				cout << "ProgramUnit :: PrintAll ()" << endl;
#endif
				
				Print ();
				cout << endl;
				
				for (int i = 0; i < musUsage->GetSize (); i++)		
				{
					cout << endl << "*************** MEMORY UNIT ***************" << endl;
					Print ((*musUsage) [i]->GetMemoryUnit ());
					cout << endl <<"************* END MEMORY UNIT *************" << endl;
				}
#if DEBUG
				cout << "************* Routines calls *************" << endl;
				PURoutineCall* temp1 = callRegion->GetFirstRoutineCall ();
				PURoutineCall* temp2 = callRegion->GetLastRoutineCall ();
				int i = 1;
				while (temp1 != temp2)
				{	
					cout <<"##############################" << endl;
					cout << i << " - routine call" << endl;
					Print (temp1);
					temp1 = callRegion->GetRoutineCall (i++);
				}
					
				if (temp2) Print (temp2);
#endif
			}			
		};

	}
}

#endif