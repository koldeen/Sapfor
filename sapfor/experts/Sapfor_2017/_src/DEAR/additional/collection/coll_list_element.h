/********************************************************************************************************************
 *	����� ListElement �������� ��������������� �������, ������������ ��� ���������� �������.						*
 *																													*
 *	��������������� ���������:																						*
 *		- ListElement (Value* val) - ����������� ��� �������� �������, ����������� � �������� �������� val			*
 *		- Value GetValue () - ���������� ��������, ��������������� �������� (this) ��������.						*
 *		- Value SetTNLoops (Value val) - ������ � ������������ �������� �������� val �	���������� ������ ��������.	*
 *		- ListElement* SetNextValue (Value val) - ��������� � ������ ����� �������� (this) ��������,				*
 *		�������, ��������������� val, ���������� ��������� �� �������, ����� ��������� �� �������.					*
 *		- ListElement* GetNext () - ���������� ��������� �� ��������� ������� �� ������� (this).					*
 *		- ListElement* SetNext (ListElement* lElem) - ������ �������, ��������� �� ������� (this),					*
 *		���������� ��������� �� �������, ����� ��������� �� �������.												*
 ********************************************************************************************************************/

#ifndef COLLECTION_LIST_ELEMENT_H
#define COLLECTION_LIST_ELEMENT_H

#include "macros.h"

namespace Collection
{
	template <class Value> class  ListElement
	{
		Value val;
		ListElement* next;

		ListElement (Value val, ListElement *next)
		{
			this->val = val;
			this->next = next;
		}
	public:	
		ListElement (Value val)
		{
			this->val = val;
			this->next = NULL;
		}

		~ListElement ()
		{
			DELETE_POINTER (val)
			DELETE_POINTER (next)
		}

		Value GetValue () {return val;}

		Value SetValue (Value val) 
		{
			Value temp = this->val;
			this->val = val;

			return temp;
		}			

		ListElement* SetNextValue (Value val) 
		{
			this->next = new ListElement (val, this->next);
			return this->next;
		}

		ListElement* GetNext () {return next;}

		ListElement* SetNext (ListElement* lElem) 
		{				
			ListElement* res = this->next;
			this->next = lElem;

			return res;
		}
	};
}

#endif