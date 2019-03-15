/****************************************************************************
 *	����� Condition �������� ������� �������								*
 *	��� �������� ������� ������������� ��� ���������� �����������.			*
 *																			*
 *	��������������� ���������:												*
 *		- Condition (char* cond) - ������ ��������� �������.				*
 *		- string ToString () - ���������� ��������� ������������� �������.	*
 ****************************************************************************/
#ifndef TEST_DEP_CONDITION_H
#define TEST_DEP_CONDITION_H

#include "macros.h"
#include <string>

namespace Analyzer
{
	namespace Test
	{
		namespace Dependences
		{
			class Condition
			{				
			public:		
				
				virtual :: std :: string ToString () = 0;				

				virtual Condition* Clone () = 0;
				
				virtual Condition& operator! () = 0;				
				
				virtual Condition& operator|| (Condition& condition) = 0;				
				
				virtual Condition& operator&& (Condition& condition) = 0;
			};
		}
	}
}

#endif