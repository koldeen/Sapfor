/****************************************************************************************************
 *	����� ICollection � ������������ ���� Collection �������� ����������� �������,					*
 *	����������� ���������� ������ � ���������� ���� �����������, ���������� �� ��� ������. 			*
 *																									*					
 *	������� ���������� ��������� � ��������� ����������� ���������� ������ size,					*
 *	���� allocatedSize ��������� ������� ��������� ����� ���� ��������� � ���������					*
 *	��� ��������������� ��������� ������.															*
 *																									*
 *	�������������� ������� ��������������� ��������� ���������� �������:							*
 *		- CheckIndexRangeEx (int index) - ���������, ��� index ����� � ��������� [0, size),			*
 *		� ������ �� ���������� ������� ������������� ���������� IndexOutOfRangeException.			*
 *		- CheckCollectionCapacityEx () - ��������, ��� ����������� ��������� ��� �� ���������,		*
 *		� ������ ������������ ������� ������������� ���������� CollectionIsFullException			*
 *		- �heckCollectionapacityEx (int requiredSize) - ���������, ��� � ����������� ���������		*
 *		���������� ������������ �� ������ ��� requiredSize, � ������ ������������ �������			*
 *		������������� ���������� CollectionIsFullException.											*
 *		- ����������� �������, �� ��� �������� Ex, ���������� false ������ ��������� ����������.	*
 *																									*
 *	�������� ������ ������ ICollection:																*
 *		- ICollection () - ����������� ������� ������������ ���������.								*
 *		- ICollection (int maxSize) - ����������� ������� ����������� ��������� ������� maxSize.	*
 *		- int GetAllocatedSize () - ���������� ����� ���������,										*
 *		��� ������� ����k��� ������ � ������������ ���������.										*
 *		- int GetSize () - ���������� ����� ��������� � ���������.									*
 *		- ICollection* Clone () - ������������ �������� ����������� �������.						*
 *		- int Add (Element) - ���������� ������ �������� � ���������,								*
 *		���������� ����, �� �������� �� ����� ���� ������;											*
 *		���� ������ �� ���� ���������, �� ������������ NOTHING_ADD;									*
 *		���� ���� �� ������������, �� ������������ KEY_NOT_DEFINED.									*
 *		- int AddRange (Element[], int) - ���������� ������� ���������,	��������� �������;			*
 *		���������� ���� ������� �������� �������;													*
 *		���� ������ �� ���� ���������, �� ������������ NOTHING_ADD;									*
 *		���� ���� �� ������������, �� ������������ KEY_NOT_DEFINED.									*
 *		- Element Update (int, Element) - �������� ������� � �������� ������, �� ��������,			*
 *		���������� ������ �������� ��������.														*
 *		- Delete (int) - ������� ������� � �������� ������ �� ���������.							*
 *		- Delete (Element) - ������� �������� ������� ��� ��� ��������								*
 *		(� ����������� �� ����������) �� ���������.													*
 *		- int Find (Element) - ���� ��������� ��������� �������� � ���������;						* 
 *		���� ���� �� ������������, �� ������������ KEY_NOT_DEFINED;									*
 *		ec�� ������� �� ������, �� ������������ ELEMENT_NOT_FOUND.									*
 *		- bool Exists (Element) - ���� ��������� ��������� �������� � ���������.					*
 *		- Element operator [int] - �������� ������� �� �����.										*
 *		- Element operator [Element] - �������� ������� �� ��������.								*
 *		- bool operator== (ICollection&) - �������� ��������� ���� ���������,						*
 *		�� ��������� ������������ ������.															*
 *		- bool operator!= (ICollection&) - �������� ��������� ���� ���������,						*
 *		�� ��������� ������������ ������.															*
 ****************************************************************************************************/
#ifndef COLLECTION_H
#define COLLECTION_H

#include "collection_exception.h"

#define NOTHING_ADD -1
#define KEY_NOT_DEFINED -2
#define ELEMENT_NOT_FOUND -3

namespace Collection
{	
	template <class Element> class ICollection
	{		
	protected:		
		int allocatedSize;
		int size;

		void CheckIndexRangeEx (int index)
		{
			if (index < 0 || index >= size) throw Exception :: IndexOutOfRangeException (0, size, index);
		}

		void CheckCollectionCapacityEx ()
		{
			if (size >= allocatedSize) throw Exception :: CollectionIsFullException (allocatedSize);
		}
		
		bool CheckCollectionCapacity ()
		{
			if (size >= allocatedSize) return false;
			return true;
		}

		void CheckCollectionCapacityEx (int requiredSize)
		{
			if (allocatedSize - size < requiredSize) throw Exception :: CollectionIsFullException (allocatedSize);
		}

		bool CheckCollectionCapacity (int requiredSize)
		{
			if (allocatedSize - size < requiredSize) return false;
			return true;
		}
		
	public:
		ICollection ()
		{			
			this->allocatedSize = 0;
			this->size = 0;
		}

		ICollection (int collSize)
		{
			if (collSize < 0) throw Exception :: NegativeMaxSizeException (collSize);			
			this->size = 0;
			this->allocatedSize	= collSize;
		}		
		
		int GetAllocatedSize () {return allocatedSize;}
		int GetSize () {return size;}

		virtual ICollection* Clone () = 0;

		virtual int Add (Element) = 0;
		virtual int AddRange (Element*, int) = 0;

		virtual Element Update (int, Element) = 0;

		virtual void Delete (int) = 0;
		virtual void Delete (Element) = 0;

		virtual int Find (Element) = 0;
		virtual bool Exists (Element elem) {return Find (elem) != ELEMENT_NOT_FOUND;}

		virtual Element operator [] (int) = 0;
		virtual Element operator [] (Element) = 0;		

		virtual bool operator== (ICollection& coll) {return this == &coll;}
		virtual bool operator!= (ICollection& coll) {return this != &coll;}
	};
}


#endif