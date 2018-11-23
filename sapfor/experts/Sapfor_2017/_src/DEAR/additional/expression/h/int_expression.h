#ifndef INT_EXPRESSION_H
#define INT_EXPRESSION_H

#include "expression.h"
#include "expr_exception.h"
using namespace Expression :: Exceptions;

namespace Expression
{
	class IntegerValue: public IExpression
	{
	private:
		int value;
		
	protected:
		IntegerValue (int value, bool isIndep) : IExpression (isIndep), value(value) {}

	public:
		IntegerValue (int value) : value(value) {}			
		
		//������������� ������
		IExpression* Clone ()			
		{
			 IExpression *new_expr = new IntegerValue (value); 
			 if (IsTemp ()) delete this; 		 
			 return new_expr;
		}
		std :: string ToString ()
		{
			char *str = new char [sizeof (value) + 1];
			if (sprintf(str, "%d", value) < 0) throw ExprException (typeid (*this).name()); //���������� �������� � �����
			if (IsTemp ()) delete this; 	
			return std :: string (str);
		}

		virtual IExpression& operator= (IExpression& expr)
		{			
			IntegerValue* iVal = dynamic_cast <IntegerValue*> (&expr);			
			if (!iVal) throw OpNotDefException ('=', typeid (*this).name());
			
			value = iVal->value; 			
			if (expr.IsTemp()) delete &expr;
			return *this;				
		}

		//������������� ������� (operators.cpp)
		//�������������� ���������
		friend IExpression& operator+ (IExpression& expr1, IExpression& expr2);
		friend IExpression& operator- (IExpression& expr1, IExpression& expr2);
		friend IExpression& operator* (IExpression& expr1, IExpression& expr2);
		friend IExpression& operator/ (IExpression& expr1, IExpression& expr2);

		//�������� ���������
		friend bool operator== (IExpression& expr1, IExpression& expr2);
		friend bool operator< (IExpression& expr1, IExpression& expr2);
		friend bool operator<= (IExpression& expr1, IExpression& expr2);
		friend bool operator> (IExpression& expr1, IExpression& expr2);
		friend bool operator>= (IExpression& expr1, IExpression& expr2);		

		//����� ������ 
		int GetValue () {return value;}	
	};
}

#endif