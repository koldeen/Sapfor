/************************************************************************************************	
 *	����� IndexVariable �������� �� �������� ���������� ����������,								*
 *	������������ � ������ ������������� ���������.												*
 *																								*
 *	������ ����� ������������� ��������� ���������:												*
 *		- int GetId () - ���������� ������������� ��������������� ����������;					*
 *		- int GetLoopId () - ���������� ������������� �����,									*
 *		�������� ��������������� ����������� ��������� ����������;								*	
 *		- IExpression* GetLeftBound () - ���������� ����� ������� ��������� ����������,			*
 *		���� ������� ����������, ������������ NULL;												*
 *		- IExpression* GetRightBound () - ���������� ������ ������� ��������� ����������;		*
 *		���� ������� ����������, ������������ NULL;												*				
 *		- IExpression* GetStep () - ���������� ���� ��������� ����������,						*
 *		���� ��� �� ��������, ������������ NULL.												*
 *		- IndexVariable* Clone () - ������������ �������� ����������� ������� ������			*
 *		�� ������ ������� �����������, ��������������� ������� ������.							*
 *		- bool operator== (IndexVariable&) - ������������ ��������� ���� ��������� ����������.	*
 ************************************************************************************************/
#ifndef INDEX_VARIABLE_H
#define INDEX_VARIABLE_H

#include "macros.h"
#include "isg_expression.h"

namespace Analyzer
{
	namespace Loop
	{
		class IndexVariable 
		{
			int id;				//������������� ��������������� ������ � ������� vars ���� ������
			int loopId;			//������������� ����� � ������� loops
			IExpression* left;	//����� ������� ��������� ��������� ����������
			IExpression* right;	//������ ������� ��������� ��������� ����������
			IExpression* step;	//��� ��������� ����������
		public:
			IndexVariable (int id, int loopId, IExpression* left,  IExpression* right, IExpression* step, bool notClone = false)
			{			
				this->id = id;
				this->loopId = loopId;
				
				if (notClone)
				{
					this->left = left;
					this->right = right;
					this->step = step;
				}
				else
				{
					if (!left) this->left = NULL;
					else this->left = left->Clone();

					if (!right) this->right = NULL;
					else this->right = right->Clone();

					if (!step) this->step = NULL;
					else this->step = step->Clone();
				}
			}

			~IndexVariable ()
			{		
				DELETE_POINTER (left)
				DELETE_POINTER (right)
				DELETE_POINTER (step)
			}

			IndexVariable* Clone ()
			{
				return new IndexVariable (id, loopId, left, right, step);
			}
				
			IExpression* GetLeftBound () {return left;}

			void SetLeftBound (IExpression* left, bool notClone = false)
			{
				DELETE_POINTER (this->left)

				if (!left || notClone)
				{
					this->left = left;
				}
				else this->left = left->Clone();

			}

			IExpression* GetRightBound() {return right;}

			void SetRightBound (IExpression* right, bool notClone = false)
			{
				DELETE_POINTER (this->right)

				if (!right || notClone)
				{
					this->right = right;
				}
				else this->right = right->Clone();

			}

			IExpression* GetStep() {return step;}

			void SetStep (IExpression* step, bool notClone = false)
			{
				DELETE_POINTER (this->step)

				if (!step || notClone)
				{
					this->step = step;
				}
				else this->step = step->Clone();

			}

			int GetId () {return id;}

			int GetLoopId () {return loopId;}

			bool operator== (IndexVariable& iVar) 
			{
				if (this->id == iVar.id && this->loopId == iVar.loopId) return true;
				return false;
			}
		};
	}
}


#endif