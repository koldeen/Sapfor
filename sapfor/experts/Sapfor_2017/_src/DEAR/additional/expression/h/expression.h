/********************************************************************************************************************
 *	� ������������ ���� Expression ������� ������, ���������� �� ��������� ������� ������������� ���������.			*		 
 *	��������: ����� �����, ��������� ������, ���������� ������ � ��.												*
 *																													*
 *	� ������ ������������� ������ �� ����� ���������� �������� ��� ������� ��������									*
 *	����� ��������� ���� �� ����������, ��������� � ������������ ���� Expression :: Exception						*
 *																													*
 *	����������� ������ � �������� ������������ ���� Expression.														*
 *	� ����� �� �������� ���������� ������� ��� �������������� �� ������ ��� �������, ����������� �� �����			*
 *	���������� ������� ����������� ������ (����� ������ Clone()), ���������� ��� ��������� (temp == true).			*
 *	� ������ ������ ������ ������ ��� ������� ������ ������������ ������� ����������� �� ������� ������ �������.	*
 *	���� ������������ ������� �������� ���������� �� ���������� ��� ��� ������ ����� ������������.					*
 *																													*
 *	������������� � ������ ���������� ��������� ������ ������� ��� ������������� ������ � ������� �������,			*
 *	����������� � ���������� ���������� ������� ������ ��� ������� ������, ������������ ����� Clone(),				*
 *	����� ������ ��������� �������� �� ������, ���������� ��� ����������.											*
 ********************************************************************************************************************/
#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>

namespace Expression
{	
	class IExpression
	{
	private:
		bool temp;		//���� ������ ��������� ��� ���������, ������ ��� �������� ����� �� ���� ����� �� ��������� � �� ����� ���� ������ ��� ������
						//�� ��������� ��� ������� ��������� �����������
						//��� ������� ����������� ������ ������ ���������		
	public:					
		IExpression () : temp (false) {}
		IExpression (bool temp) : temp (temp) {}
		bool IsTemp () {return temp;}
		
		virtual IExpression* Clone () = 0;
		virtual std :: string ToString () = 0;			
		virtual IExpression& operator= (IExpression& expr) = 0;

		//������������� ������� (operators.cpp)
		//�������������� ���������
		friend IExpression& operator+ (IExpression& expr1, IExpression& expr2);
		friend IExpression& operator- (IExpression& expr1, IExpression& expr2);
		friend IExpression& operator* (IExpression& expr1, IExpression& expr2);
		friend IExpression& operator/ (IExpression& expr1, IExpression& expr2);

		//�������� ���������
		friend bool operator== (IExpression& expr1, IExpression& expr2);
		friend bool operator!= (IExpression& expr1, IExpression& expr2);
		friend bool operator< (IExpression& expr1, IExpression& expr2);
		friend bool operator<= (IExpression& expr1, IExpression& expr2);
		friend bool operator> (IExpression& expr1, IExpression& expr2);
		friend bool operator>= (IExpression& expr1, IExpression& expr2);
	};
}

#endif