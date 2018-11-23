/****************************************************************************************************
 *	����� Dependence ������������� ������ �� ��������� �����������.									*
 *	��� ������ ����������� ������� ��������� ���������:												*
 *		- ����� ����;																				*
 *		- ����� ���;																				*
 *		- ������ ������ �������;																	*
 *		- ����� ����, ���� ��������� ��������� �������;												*
 *		- ����� ���, ���� ��������� ��������� �������.												*
 *																									*
 *	��������������� ���������:																		*
 *		- Dependence (bool isExists, bool isExactly) - �����������, �������� �������� �����������.	*
 *		- bool IsExists () - ��������� �� ������������� (true) ��� ���������� (false) �����������.	*
 *		- bool IsExactly () - ��������� �� �������� ���������� �� �����������. 						* 
 *		�������� � ������ �������� ����������� ��������������� � NULL								*
 *		- Condition* GetCondition () - ���������� �������, ���������� ����������� ��� NULL.			*
 ****************************************************************************************************/
#ifndef TEST_DEPENDENCE_H
#define TEST_DEPENDENCE_H

#include "test_dep_cond.h"

namespace Analyzer
{
	namespace Test
	{
		namespace Dependences
		{	
			class IDependence
			{
			public:
				virtual bool IsExists () = 0;
				virtual bool IsExactly () = 0;
				virtual Condition* GetCondition () = 0;
			};

			class Dependence : public IDependence
			{
				bool isExists;
				bool isExactly;
				Condition* �ondition;

			public:
				Dependence (bool isExists, bool isExactly)
				{					
					this->isExists = isExists;
					this->isExactly = isExactly;
					this->�ondition = NULL;
				}

				void SetExistence (bool isExists) {this->isExists = isExists;}
				
				void SetExactness (bool isExactly) 
				{
					this->isExactly = isExactly;
					if (!isExactly) DELETE_POINTER (�ondition);
				}				

				void SetCondition (Condition* cond) 
				{
					DELETE_POINTER (�ondition)
					this->�ondition = cond;
				}		

				bool IsExists () {return isExists;}

				bool IsExactly () {return isExactly;}

				Condition* GetCondition () {return �ondition;}
			};
		}
	}
}

#endif