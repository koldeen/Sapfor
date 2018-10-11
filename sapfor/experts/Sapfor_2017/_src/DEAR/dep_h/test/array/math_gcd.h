/********************************************************************************************
 * ����� GCDTwoNumbers ������������� ��� ���� ����� fn (first number), sn (second number).	*
 * ��� ���������� ��� ������������ ����������� �������� �������:							*
 *			������� ������: ��� ����� ����� fn, sn.											*
 *			��������� ���������:															*
 *								- ��� (fn, sn) - gcd > 0									*
 *								- ��� ����� ����� fnc, snc: fnc * fn + snc * sn = gcd		*
 ********************************************************************************************/
#ifndef MATH_GCD_TWO_NUMBER_H
#define MATH_GCD_TWO_NUMBER_H

#include <cmath>

namespace Mathematics
{
	class GCDTwoNumbers 
	{
	private:		
		int fn, sn; //�����, ������� ������������� ���
		int gcd, fnc, snc;	//fnc * fn + snc * sn = gcd
		
		void Calculate (int a, int b) //������� ���������� ��� ��� ������������� �����
		{
			if (b == 0) 
			{
				gcd =  a;
				fnc = 1;
				snc = 0;
			}
			else
			{
				int temp; 
				Calculate (b, a % b);
				temp = fnc;
				fnc = snc;
				snc = temp - a / b * snc;
			}			
		}

		void Calculate () //������� ���������� ��� � ����� ������
		{
			Calculate (abs (fn), abs (sn));	
			if (fn < 0) fnc = - fnc;
			if (sn < 0) snc = - snc;
		}
	public:
		GCDTwoNumbers (int fn, int sn)
		{
			this->fn = fn;
			this->sn = sn;
			Calculate ();				
		}
		
		int GetGCD () {return gcd;}	//���������� ���
		int GetFirstNumber () {return fn; }     //���������� ������ �����
		int GetSecondNumber () {return sn; }		//���������� ������ �����
		int GetFNCoeff () {return fnc;}	//���������� ����������� ��� ������ �����
		int GetSNCoeff () {return snc;}	//���������� ����������� ��� ������ �����
	};
}

#endif