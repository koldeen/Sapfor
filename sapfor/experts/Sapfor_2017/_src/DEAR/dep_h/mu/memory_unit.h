/****************************************************************************************************
 *	���������, ����������� ������������� ������ ����������� � ������������ ���� Memory.				*
 *	������� ����� MemoryUnit �������� ����� ���������� �� ������������ � ��������� ������.			*
 *	���������������� �������� �������� ����� �������� ������.										*
 *	����� MemoryUnit ������������� ����������:														*
 *		- �� ���������������, ����������� � ������������ �������;									*
 *		- � ������� ������������� ������ �������.													*
 *																									* 
 *	��������� (������������� ��� ����� ������������ ���� Analyzer):									*
 *																									*
 *	1.	���� ����� ���������� ������� ������������ �������� notClone, 								*
 *	�� �� ��������� ������������ �������� ����������� �������.										*
 *	����� ��������� ������ ��� ����������� ��� ��������� ������������� ���������� ���������,		*
 *	�������� ���������� ������ �������� notClone = true.											*
 *																									*
 *	2.	���� ������� ������������ ��� ���������� (�����������, Set..., Add...)						*
 *	����������� � �������� ��������� ��������� �� ������, ����� ��� ������������� �������� void,	*
 *	������ � �������� ���������� �������� ����������� �� ����������� �								*
 *	� ������ �������� � �������� ��������� ���������,												*
 *	������� ����� ������������ ����� ����������������, �������� ������ ������� ����������.			*
 *																									*
 *	���������, ��������������� �������:																*
 *		- MemoryUnit (int varId) - ����������� ��������� ������, ��������������� ����� ����������.	*
 *		- MemoryUnit (int* varsId, int varsNum) - ����������� ��������� ������,						*
 *		����������� �������	������ �� ������� ��������� varsNum ����������.							*
 *		- int GetVarsId (int i = 0) - ���������� i - �� ���������� ��������������� ������� ������.	*
 *		- int GetVarsNumber () - ���������� ����� ���������� ��������������� ������� ������.		*
 *		- MemoryUnit* Clone () - ������������ �������� ����������� �������.							*
 *		- MemoryUnitUsage* AddUsage (MemoryUnitUsage* newUsage, bool notClone = false) -			*
 *		��������� ����� ������������� � ������ ������������� ������� ������.						*
 *		- MemoryUnitUsage* GetFirstUsage () - ��������� ����� ������� ������������� �������.		*
 *		- MemoryUnitUsage* GetLastUsage () - ��������� ����� ���������� ������������� �������.		*	
 *		- bool IsScalar () - ���������, ������������� ������� ������ ������� ��� �������.			*
 *		- operator == (MemoryUnit& mu) - ���������� ��� �������.									*
 ****************************************************************************************************/
#ifndef MEMORY_UNIT_H
#define MEMORY_UNIT_H

#include "stdlib.h"
#include "mu_exception.h"
#include "macros.h"

#define CLONE_MU(clone) \
{ \
	clone->firstUsage = firstUsage->Clone(); \
	\
	MemoryUnitUsage* temp = firstUsage; \
	clone->currentUsage = clone->firstUsage; \
	while (temp && temp != currentUsage) /*���� firstUsage == NULL, �� ���� ���������� 0 ��� � currentUsage == NULL*/ \
	{ \
		temp = temp->GetNextUsage (); \
		clone->currentUsage = clone->currentUsage->GetNextUsage (); \
	} \
	\
	/*��������� ������������� ����� currentUsage � firstUsage
	���� ��� NULL, ���� ������ ��������� (currentUsage ��������� �� ��������� �������������)*/ \
	if (!temp && firstUsage) throw new Analyzer :: Memory :: Exception :: MemoryUnitException (); \
}

namespace Analyzer
{
	namespace Memory
	{
		class MemoryUnitUsage;

		class MemoryUnit
		{
		protected:	
			int* varsId;		//���������� ����������� ����� �������: ��������� � ������ COMMON-������							
			int varsNum;		//����� ���������� ����������� �� ���� ������� ������ (������ varsId)		
			MemoryUnitUsage* firstUsage;
			MemoryUnitUsage* currentUsage;
		public:
			MemoryUnit (int varId) 
			{ 
				this->varsId = new int [1]; 
				this->varsId [0] = varId;
				this->varsNum = 1;
				this->firstUsage = NULL;
				this->currentUsage = NULL;
			}

			MemoryUnit (int* varsId, int varsNum) 
			{
				this->varsNum = varsNum;
				this->varsId = new int [this->varsNum];
				for (int i = 0; i < varsNum; i++) 
					this->varsId [i] = varsId [i];	
				this->firstUsage = NULL;
				this->currentUsage = NULL;
			}			

			~MemoryUnit (); 

			int GetVarsId (int i = 0) 
			{
				CHECK_INDEX_RANGE (i, 0, varsNum)

				return varsId [i];
			}

			int GetVarsNumber () {return varsNum;}
			
			virtual MemoryUnit* Clone () = 0;
			
			MemoryUnitUsage* AddUsage (MemoryUnitUsage* newUsage, bool notClone = false);
			
			MemoryUnitUsage* GetFirstUsage () {return firstUsage;}
			
			MemoryUnitUsage* GetLastUsage (); 			

			virtual bool IsScalar () = 0;

			virtual bool operator== (MemoryUnit& mu) 
			{
				if (this == &mu) return true;

				if (varsNum != mu.varsNum) return false;
				for (int i = 0; i < varsNum; i++)
					if (varsId [i] != mu.varsId [i]) return false;

				return firstUsage == mu.firstUsage;
			}
				
		};		
	}

}

#endif