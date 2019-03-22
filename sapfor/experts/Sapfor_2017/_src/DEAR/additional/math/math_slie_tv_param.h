/************************************************************************************
 *	������ ����� ������� ������������� �������� ��������� R ��� ������� �������:	*
 *	y1 = u1 + v1 * t																*
 *	y2 = u2 + v2 * t																*
 *	y1 ! = y2																		*
 *	0 <= y1 <= R																	*
 *	0 <= y2 <= R																	*
 *	c ������ �������������� ����� ������������� �������.							*
 ************************************************************************************/
#ifndef MATH_SLIE_TV_PARAMEMTER_H
#define MATH_SLIE_TV_PARAMEMTER_H

#include "math_functions.h"
#include "main_exception.h"
#include <cmath>

namespace Mathematics
{
	//system of linear inequality with two variable and parameter
	class SLIneqTVParameter
	{
		int u1, v1;
		int u2, v2;
		int yMin;
		bool isSolutionExist;		

		int tL1, tR1; //��������� ����� ����� � ������ �� ����������� y1 � 0 ��������������
		int tL2, tR2; //��������� ����� ����� � ������ �� ����������� y2 � 0 ��������������
		int tLInt, tRInt;	//tInt = (u1 - u2) / (v2 - v1) - ����� ����������� ������ y1 � y2
							//���� ��� ������������
							//tLInt, tRInt - ��������� ����� ����� � ������ �� tLInt ��������������

		//v1 == v2 - ������ y1 � y2 �����������
		void IfParallel () 
		{
			if (v1 > 0) 
				if (u1 > u2) 	
					yMin = MathFunctions :: LinearFunction2 (u1, v1, tR2); 
				else 
					yMin = MathFunctions :: LinearFunction2 (u2, v2, tR1); 
			else 
				if (u1 > u2)
					yMin = MathFunctions :: LinearFunction2 (u1, v1, tL2); 						
				else				
					yMin = MathFunctions :: LinearFunction2 (u2, v2, tL1);
			}
		//0 < v1 < v2 - ��� ������ �������� ������ ���� � ��� Ox
		void IfAcuteAngleOx ()
		{	
			int tMin;
			if (tR2 == tRInt && tLInt == tRInt && 
				(tL2 == tR2 || tR1 <= tLInt))
				yMin = MathFunctions :: LinearFunction2 (u1, v1, tR2 + 1); //���� �.2, ���� �
			else if (tL1 > tRInt || 
					 tL1 == tRInt ||
					 tL1 == tLInt && tLInt == tRInt ||
					 tL1 == tLInt && tL1 != tR1 && tL2 != tL1)
				yMin = MathFunctions :: LinearFunction2 (u2, v2, tR1); //�)
			else
				yMin = MathFunctions :: LinearFunction2 (u1, v1, tR2); //a.1)			
		}

		//v1 < v2 < 0 - ��� ������ �������� ����� ���� � ��� Ox	
		void IfObtuseAngleOx ()
		{
			int tMin;
			if (tLInt == tRInt && tL1 == tLInt &&
				(tR1 == tL1 || tL2 >= tRInt))
				 MathFunctions :: LinearFunction2 (u2, v2, tL1 + 1); //���� �.2, ���� �
			else if (tL1 > tRInt || 
					 tR2 == tLInt ||
					 tR2 == tRInt && tRInt == tLInt ||
					 tR2 == tRInt && tR2 != tL2 && tR1 != tR2)
				 MathFunctions :: LinearFunction2 (u1, v1, tL2);
			else
				 MathFunctions :: LinearFunction2 (u2, v2, tL1);					
		}

		//v1 < 0 < v2 - ������ �������� ����� � ������ ���� � ���� Ox
		void IfDiffAngleOx ()
		{
			if (0 > min (MathFunctions :: LinearFunction2 (u1, v1, tLInt), 
						 MathFunctions :: LinearFunction2 (u2, v2, tRInt)) ||
				0 == MathFunctions :: LinearFunction2 (u1, v1, tRInt)) //�)
				isSolutionExist = false;
			else if (tL1 == tR2 && tL2 == tR1) //�)
				yMin = min (MathFunctions :: LinearFunction2 (u1, v1, tLInt - 1), 
							MathFunctions :: LinearFunction2 (u1, v1, tRInt + 1));
			else 
			{
				if (tL2 == tL1 ||
					tLInt == tRInt && tR2 == tL1 && tR2 == tLInt)
					isSolutionExist = false;
				else if (tLInt == tRInt)
				{
					if (tR2 == tLInt)
						yMin = MathFunctions :: LinearFunction2 (u1, v1, tRInt + 1);
					else if (tL1 == tRInt)
						yMin = MathFunctions :: LinearFunction2 (u1, v1, tLInt - 1);
					else
						yMin = min (MathFunctions :: LinearFunction2 (u1, v1, tLInt - 1), 
									MathFunctions :: LinearFunction2 (u1, v1, tRInt + 1));
				}
				else 
					yMin = min (MathFunctions :: LinearFunction2 (u1, v1, tLInt), 
								MathFunctions :: LinearFunction2 (u1, v1, tRInt));
			}
		}

		void Solve ()
		{
			tL1 = MathFunctions :: LeftIntegerPart (- u1, v1); 
			tR1 = MathFunctions :: RightIntegerPart (- u1, v1); 
				
			tL2 = MathFunctions :: LeftIntegerPart (- u2, v2); 
			tR2 = MathFunctions :: RightIntegerPart (- u2, v2); 

			if (v1 == v2)
				IfParallel ();	
			else
			{
				if (v1 > v2)
				{	//������ ������� �������, ����� v1 <= v2					
					int temp;
					temp = u1;
					u1 = u2; 
					u2 = temp;

					temp = v1;					
					v1 = v2;					
					v2 = temp;
				}
				//�������� ������: 
				//1. v1 > 0, ����� v2 > 0
				//2. v2 < 0, ����� v1 < 0
				//3. v1 < 0 < v2

				tLInt = MathFunctions :: LeftIntegerPart (u1 - u2, v2 - v1);	
				tRInt = MathFunctions :: LeftIntegerPart (u1 - u2, v2 - v1);
				if (v1 > 0) 
					 IfAcuteAngleOx ();
				else if (v2 < 0) IfObtuseAngleOx ();
				else IfDiffAngleOx ();
			}
		}

	public:
		SLIneqTVParameter (int u1, int v1, int u2, int v2)
		{
			if (v1 == 0 || v2 == 0) throw :: Exception :: IException ("division by zero");
			this->u1 = u1;
			this->v1 = v1;
			this->u2 = u2;
			this->v2 = v2;
			
			Solve ();
		}		
		
		int GetYMin () {return yMin;}

		bool IsSolutionExist () {return isSolutionExist;}
	};
}

#endif