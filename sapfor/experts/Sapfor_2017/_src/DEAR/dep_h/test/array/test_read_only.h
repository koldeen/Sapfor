/****************************************************************************************
 *	������ ���� ������������ �������� ��������� � �������.								*
 *	� ������ ���� �� ������� � ������ ������������ ������ �������������� ������ ������,	*
 *	�� ����������� ���.																	*
 ****************************************************************************************/
#ifndef TEST_READ_ONLY_H
#define TEST_READ_ONLY_H

#include "debug.h"
#include "test.h"

namespace Analyzer
{
	namespace Test
	{
		class ReadOnlyTest : public ITest
		{
			//firstUsage != NULL 
			//view: [firstUsage, lastUsage)
			UsageType MaxUsageType (MemoryUnitUsage* firstUsage, MemoryUnitUsage* lastUsage)
			{
#if DEBUG & DBG_TEST_ARRAY
				cout << "bool IsReadOnly (MemoryUnitUsage*, MemoryUnitUsage*)" << endl;
#endif
				MemoryUnitUsage* usage = firstUsage;
				UsageType uType = NOT_USAGE;

				while (usage != lastUsage)
				{					
#if DEBUG & DBG_TEST_ARRAY		
					cout << "CHECK_NULL_POINTER (usage)" << endl;
					CHECK_NULL_POINTER (usage)				
#endif				
					uType = usage->GetUsageType ();
					if (uType == WRITE)					
						return WRITE;
					
					usage = usage->GetNextUsage ();
				}

				return uType;
			}

		public:
			ReadOnlyTest (int testId) : ITest (testId) {}
			bool IsApplicable ()
			{
				ITest :: IsApplicable ();

				if (!mu->IsScalar ()) return true;
				return false;
			}

			TestResult Execute ()
			{
#if DEBUG & DBG_TEST_ARRAY
				cout << "ReadOnlyTest :: Execute ()" << endl;
#endif 
				if (!IsApplicable ()) return NOT_APPLICABLE;

				MemoryUnitUsage* firstInLoop = pu->GetFirstUsage (mu);
				MemoryUnitUsage* lastInLoop = pu->GetLastUsage (mu);	
				DepTestInfo* dTInfo = pu->GetDepTestInfo (mu);

//#if TEST_USE_PRE_INFO
//				ProgramUnit* externalpu = pu->GetExternalPU ();						
//
//				//�������� ������������, ���� ��� �� ���������
//				if (!dTInfo->GetIsTested ()) 
//				{
//					//���������: �� ������� ���� � ����� ���������� ������ ����������� �� ������ ������,
//					//���� �� ���������� ������ mu �� ��������������, �� ����������� ���
//					for (int i = 0; i < pu->GetInternalPUsNumber (); i++)												// �� ���������
//						if (!((TightlyNestedLoops*)pu->GetInternalPU (i))->GetDependence (mu, 0)->IsAlwaysNotExists()) 
//							return FAILURE;
//
//					MemoryUnitUsage* sTRegion = dTInfo->GetStartTestedRegion ();
//					MemoryUnitUsage* eTRegion = dTInfo->GetEndTestedRegion ();					
//					bool isReadOnly;
//					
//					//���� ��� ���������������� ������� �� ������, �� sTRegion == NULL � eTRegion == NULL.
//					//� ���� ������ ����� �������������� ��� ������� [firstInLoop, lastInLoop].
//					if (!sTRegion) 
//						isReadOnly = IsReadOnly (firstInLoop, lastInLoop->GetNextUsage ());
//					else 
//						isReadOnly = IsReadOnly (firstInLoop, sTRegion) && 
//							IsReadOnly (eTRegion->GetNextUsage (), lastInLoop->GetNextUsage ())	;						
//										
//					if (isReadOnly) 
//					{
//#if DEBUG & DBG_TEST_ARRAY
//						cout << "array is read only" << endl;
//#endif						
//										
//						for (int loop = 0; loop < pu->GetLoopsNumber (); loop++)
//							dTInfo->SetExistenceCond(loop, DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);
//						dTInfo->SetIsTested ();
//
//						//��������� ���������������� �������
//						if (externalpu)
//						{
//							DepTestInfo* eDTInfo = externalpu->GetDepTestInfo (mu);
//							if (!eDTInfo->GetIsTested ())
//							{
//								if (!eDTInfo->GetStartTestedRegion ())
//									eDTInfo->SetStartTestedRegion (firstInLoop);
//								eDTInfo->SetEndTestedRegion (lastInLoop);
//							}
//						}
//						return SUCCESS;
//					}
//				}				
//#else
				UsageType uType = MaxUsageType (firstInLoop, lastInLoop->GetNextUsage ());
				dTInfo->SetUsageType (uType);

				if (uType == READ || uType == NOT_USAGE) 
				{
#if DEBUG & DBG_TEST_ARRAY
					cout << "array is read only" << endl;
#endif
								
					for (int loop = 0; loop < pu->GetLoopsNumber (); loop++)
						dTInfo->SetExistenceCond(loop, DEP_NOT_EXIST, DEP_ALWAYS, DEP_EXACTLY);			
					dTInfo->SetIsTested ();

					return SUCCESS;
				}
//#endif
				
				return FAILURE;
			}
		};
	}
}

#endif