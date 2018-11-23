/********************************************************************************************************	
 *	����� DepTestInfo �������� �������� �����������,													*
 *	� ����� ���������� ������������ ������� � �������� ������������.									*
 *	���������, ��� � ������ ������ ������� ��������������� �������� ����������� �������� ����������.	*
 *	� ��������� ������ ������� ���������, ��� ����������� �������� ����������.							*
 *																										*
 *	��������������� ���������:																			*
 *		- Dependence* GetDependence () - ������������� ���������� � �����������.						*
 *		- void SetExistence (bool isExists) - ��������� ������ �������������.							*		
 *		- void SetExactness (bool isExactly) - ��������� ������ ��������.								*
 *		- void SetCondition (Condition* cond) - ��������� ������ ������� ������������� (����������)		*
 *		�����������. �������� ����������� ������� �� ��������������.									*
 *		- bool GetIsTested () - ��������� ������: �������� �� ������������.								*
 *		���� true, �� ������������ ��������� ��������� � ������ ������ ������� ������.					*
 *		���� false, �� ���� �� �����������, ���� ����� �� ������.										*
 *		- void SetIsTested () - ���������, ��� ������������ ���������.									*
 *																										*
 *	��������� �������� ��������� ������, ��� ��� �������� ������������ ���������� ��� ������������		*
 *	������. ��� �������� ��������� �������� (���������� Dependence ������ ������).						*
 ********************************************************************************************************/
#ifndef TEST_DEPENDENCE_INFO_H
#define TEST_DEPENDENCE_INFO_H

#include "macros.h"
#include "mu_usage.h"

#include "test_dependence.h"
#include "test_info.h"


using namespace Analyzer :: Memory;

namespace Analyzer
{
	namespace Test
	{		
		namespace Dependences
		{
			class DepTestInfo
			{			
				Dependence** dep;			//����������� �� ������ �� ������
				int loopsNumber;

				bool isTested;	
				MemoryUnitUsage* sTRegion; //������ � 
				MemoryUnitUsage* eTRegion; //����� ���������������� �������

				TestInfo* tInfo;

				UsageType uType;

			public:
				DepTestInfo (int loopsNumber)
				{
					this->loopsNumber = loopsNumber;
					NEW_POINTER_ARRAY (dep, loopsNumber, Dependence); //�� ��������� ��� ����������� �������� ����������
					for (int loop = 0; loop < loopsNumber; loop++)
						dep [loop] = new Dependence ();

					isTested = false;
					sTRegion = NULL;
					eTRegion = NULL;
					uType = UNKNOWN;
					tInfo = NULL;
				}		
				
				~DepTestInfo ()
				{
					sTRegion = NULL;
					eTRegion = NULL;
					
					DELETE_POINTER_ARRAY (dep, loopsNumber)
					DELETE_POINTER (tInfo)
				}

//*************************** Dependence overview **********************************
				IDependence* GetDependence (int loop) 
				{
					CHECK_INDEX_RANGE (loop, 0, loopsNumber)
					return (IDependence*)dep [loop];
				}							

				void SetDependence (int loop, Dependence* dep, bool notClone = false)
				{					
					CHECK_INDEX_RANGE (loop, 0, loopsNumber)

					if (notClone)
					{
						DELETE_POINTER (this->dep [loop])
						this->dep [loop] = dep;
					}
					else
					{
						*this->dep [loop] = *dep;
					}
				}

				void SetExistenceCond (int loop, Existence isExists, Condition* cond, Exactness isExactly)
				{
					CHECK_INDEX_RANGE (loop, 0, loopsNumber)

					dep [loop]->SetExistenceCond (isExists, cond, isExactly);
				}		

				int GetLoopsNumber () {return loopsNumber;}
				
//**********************************************************************************

				bool GetIsTested () {return isTested;}

				void SetIsTested () {isTested = true;}

				MemoryUnitUsage* GetStartTestedRegion () {return sTRegion;}
				void SetStartTestedRegion (MemoryUnitUsage* sTRegion) {this->sTRegion = sTRegion;}

				MemoryUnitUsage* GetEndTestedRegion () {return eTRegion;}
				void SetEndTestedRegion (MemoryUnitUsage* eTRegion) {this->eTRegion = eTRegion;}

				UsageType GetUsageType ()
				{
					return uType;
				}

				void SetUsageType (UsageType uType)
				{
					this->uType = uType;
				}

				void AddTestInfo (TestInfo* tInfo)
				{
					this->tInfo = tInfo;
				}

				TestInfo* GetTestInfo (int testId)
				{
					return tInfo;
				}

			};	
		}
	}
}

#endif