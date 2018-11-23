/****************************************************************************************************************
 *	����������� ����� MemoryUnitUsage �������� ����� ���������� �� ������������� ��������� ������� ������.		*
 *	������ ����� �������� �������, ����� ��������� �������� �������� ����� ������� ������.						*	
 *	����� MemoruUnitUsage ������������� ����������:																*
 *		- � ���� ������������� (������������ ��� UsageType);													*
 *		- � c�������� �������������.																			*
 *																												*
 *	���������, ��������������� �������:																			*
 *		- MemoryUnitUsage (UsageType usageType) - ����������� ����� ����� �������������,						*
 *		� ����� ������������� usageType.																		*
 *		- MemoryUnitUsage* Clone () - ������������ �������� ����������� �������.								*
 *		- UsageType GetUsageType () - ���������� ��� ������������� ������� ������.								*
 *		- MemoryUnitUsage* GetNextUsage () - ���������� ��������� �� ��������� ����� �������������.				*
 *		- bool operator== (MemoryUnitUsage& muu) - ���������� ��� ������ �������������, ������������ � this.	*
 ****************************************************************************************************************/
#ifndef MEMORY_UNIT_USAGE_H
#define MEMORY_UNIT_USAGE_H

#include "memory_unit.h"
#include "macros.h"

namespace Analyzer
{	
	namespace Memory
	{
		enum UsageType 
		{
			INVALID_TYPE = 0,
			FIRST_TYPE = 1, 
			NOT_USAGE = 1,
			READ = 2, 
			UNKNOWN = 3, 
			WRITE = 4, 
			LAST_TYPE = 4
		};	
		
		class MemoryUnitUsage
		{
		protected:
			UsageType usageType;			
			MemoryUnitUsage* nextUsage;		
					
			void AddNextUsage (MemoryUnitUsage* newUsage)
			{				
				CHECK_NULL_POINTER (newUsage)			
				
				if (nextUsage) newUsage->AddNextUsage (nextUsage);
				nextUsage = newUsage;					
			}

			friend MemoryUnitUsage* MemoryUnit :: AddUsage (MemoryUnitUsage*, bool);
		public:		
			MemoryUnitUsage (UsageType usageType) 
			{				
				this->usageType = usageType;
				this->nextUsage = NULL;					
			}

			~MemoryUnitUsage ()
			{					
				DELETE_POINTER (nextUsage)				
			}

			virtual MemoryUnitUsage* Clone () = 0;				

			UsageType GetUsageType () {return usageType;}

			void SetUsageType (UsageType usageType) {this->usageType = usageType;}

			MemoryUnitUsage* GetNextUsage () {return nextUsage;}	

			virtual bool operator== (MemoryUnitUsage& muu)
			{
				if (this == &muu) return true;

				if (usageType != muu.usageType) return false;
				if (nextUsage == muu.nextUsage) return true; //���� ������ �� ���� � �� �� ������� ������ ��� ��� NULL, �� �����
				return *nextUsage == *muu.nextUsage;
			}

			virtual bool operator!= (MemoryUnitUsage& muu)
			{
				return !(*this == muu);
			}
		};		
	}
}
#endif