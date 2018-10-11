#ifndef TEST_TREE_BROWSE_H
#define TEST_TREE_BROWSE_H

#include "tn_loops.h"
#include "macros.h"

using namespace Analyzer :: Loop;

namespace Analyzer
{
	namespace Test
	{
		class TNLTreeBrowse
		{
			ProgramUnit* root;
			ProgramUnit* curTNL;
			MemoryUnit* curMU;	
		
		public:
			TNLTreeBrowse ()
			{
				root = NULL;
				curTNL = NULL;
				curMU = NULL;						
			}

			~TNLTreeBrowse ()
			{
				DELETE_POINTER (root)
				curTNL = NULL;
				curMU = NULL;
			}

			ProgramUnit* GetTNLoops () {return root;}
			ProgramUnit* SetTNLoops (ProgramUnit* tnl) 
			{				
				ProgramUnit* temp = root;
				
				root = tnl;
				curTNL = root;
				curMU = NULL;		

				if (root) 
				{
					while (curTNL->GetInternalPUsNumber () !=0)
						curTNL = curTNL->GetInternalPU (0);				

					if (curTNL->GetMemoryUnitsNumber () == 0) //� ����� �� ������������ �� ���� ����������
						curTNL = curTNL->GetExternalPU ();

					if (curTNL) curMU = curTNL->GetMemoryUnit (0); 
				}
								
				return temp;
			}

			ProgramUnit* GetCurrentTNLoops () {return curTNL;}
			MemoryUnit* GetCurrentMUnit () {return curMU;}

			void Next ()
			{
				CHECK_NULL_POINTER (root)

				curMU = curTNL->GetNextMemoryUnit (curMU);
					
				if (!curMU)	//���� ����������� ��� MemoryUnit, �� ��������� � ���������� ������
				{
					ProgramUnit* temp = curTNL->GetExternalPU (); 
										
					if (!temp) //curTNL ��������� �� ������
					{
						curTNL = NULL;
						return;
					}

					curTNL = temp->GetNextInternalPU (curTNL);

					if (!curTNL) curTNL = temp; //��� ��� ���� temp ��� �����������
					else 
					{
						while (curTNL->GetInternalPUsNumber () !=0) //���������� �� ����� ����� ����� � ��������� � ������ � curTNL
							curTNL = curTNL->GetInternalPU (0);
					}

					//���� � ������� ������ �� ������������ ������ ����������, ��
					//�� ������� ������ ������ ���� �� ������� ���� ���� �������������, ��� ���
					//����� ������ ������� �� � ���� ����� ��������� ������					
					if (curTNL->GetMemoryUnitsNumber () == 0) curTNL = curTNL->GetExternalPU ();
					//������ curTNL == temp ��� ����� ����
					//(temp ������� �� ���� (temp = curTNL->GetExternalNest ()), � ���������� MemoryUnit �������� ������ � �����),
					//������� curTNL != NULL
					
					curMU = curTNL->GetMemoryUnit (0);					
				}
			}

			bool IsAllView () {return curTNL == root->GetExternalPU ();}
		};
	}
}

#endif