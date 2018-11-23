/****************************************************************************************************************
 *	����� ITest �������� ������� ��� �������, ����������� ����������� �����.									*
 *	������ ���� ��������� �� ����������� ������� ��� ���������� �����������										*
 *	�� �������� ������� ������ (MemoryUnit) � �������� ������ (TightlyNestedLoops).								*
 *																												*
 *	����� ��������� ������ ������������ ����� ������� ������������.												*
 *	���� ��������� ���� �� �����������, �� ������ �� ��������� ���������� ����������.							*
 *	���� ������ ���� �� ��������� � ������������ �������, �� ��������� ������� ��								*
 *	������� ����������� �� ���������� ������� ������ ��������� �����������.										*	
 *																												*
 *	���������, ��������������� ������ �������:																	*
 *		- ITest (ITest* nextTest)																				*	
 *		- int GetTestId () - ���������� ������������� �����.													*		
 *		- TightlyNestedLoops* GetTNLoops () - ���������� ����������� ������.									*
 *		- void SetTNLoops (TightlyNestedLoops* tNLoops) - ������ ����������� ������.							*
 *		- MemoryUnit* GetMUnit () - ���������� ����������� ������� ������.										*
 *		- void SetMUnit (MemoryUnit* mu) - ������ ����������� ������� ������.									*
 *		- bool IsApplicable () - ��������� ������������ ����� ��� �������� ������ � ������� ������.				*
 *		- TestResult Execute () - ��������� ���������� ������� ������ ��� ��������� ������� � �������� ������.	* 
 ****************************************************************************************************************/
#ifndef TEST_H
#define TEST_H

#include "debug.h"
#include "program_unit.h"
#include "memory_unit.h"
#include "macros.h"

using namespace Analyzer :: Loop;
using namespace Analyzer :: Memory;

namespace Analyzer
{
	namespace Test
	{
		typedef int TestIdentifier;

		enum TestResult {NOT_APPLICABLE, SUCCESS, FAILURE};

		class ITest
		{			
		protected:
			TestIdentifier testId;
			ProgramUnit* pu;
			MemoryUnit* mu;							
		
			ITest (TestIdentifier testId)
			{			
				this->testId = testId;
				this->pu = NULL;
				this->mu = NULL;
			}

		public:

			~ITest ()
			{				
				pu = NULL;
				mu = NULL;
			}

			TestIdentifier GetTestId () {return testId;}

			ProgramUnit* GetPUnit () {return pu;}

			void SetPUnit (ProgramUnit* pu) { this->pu = pu;}

			MemoryUnit* GetMUnit () {return mu;}

			void SetMUnit (MemoryUnit* mu) {this->mu = mu;}			

			virtual bool IsApplicable () 
			{
#if DEBUG & DBG_TEST
				cout << "ITest :: IsApplicable ()" << endl;
#endif 

				CHECK_NULL_POINTER (pu)
				CHECK_NULL_POINTER (mu)

#if DEBUG & DBG_TEST
				cout << "tnl != NULL && mu != NULL" << endl;
#endif 

				return false;
			}
			
			virtual TestResult Execute () 
			{
#if DEBUG & DBG_TEST
				cout << "ITest :: Execute ()" << endl;
#endif 

				CHECK_NULL_POINTER (pu)
				CHECK_NULL_POINTER (mu)	

#if DEBUG & DBG_TEST
				cout << "tnl != NULL && mu != NULL" << endl;
#endif 

				return FAILURE;				
			}
		};
	}
}

#endif