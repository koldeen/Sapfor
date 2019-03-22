/************************************************************************************************************************
 *	� ������ ����� ������� ��������������� �������.																		*
 *	������ ������� ���������:																							*
 *		- �������� ������ ��� ������ ���������� ������������� ������� - NEW_POINTER_ARRAY (arr, size, type)				*
 *		- ����������� ������, ���������� ��� ��������� - DELETE_POINTER (pointer)										*
 *		- ����������� ������, ���������� ��� ������ - DELETE_ARRAY (pointer)											*
 *		- ����������� ������, ���������� ��� ������ ���������� ������������� ������� - DELETE_POINTER_ARRAY (arr, size)	*
 *		- ��������� ���������� ������� � �������� �������� - CHECK_INDEX_RANGE (index, first, size)						*	
 *		- ���������, ��� ��������� �� �������� ������� - CHEKC_NULL_POINTER (pointer)									*
 ************************************************************************************************************************/
#ifndef MACROS_H
#define MACROS_H

#include "stdlib.h"
#include "collection_exception.h"
#include "main_exception.h"

#define NOT_CLONE true
#define CLONE false

#define NEW_POINTER_ARRAY(arr, size, type) \
{ \
	if (size < MIN_NEW_MEMORY_SIZE) throw :: Exception :: AllocatedMemorySizeException (size); \
	arr = new type* [size]; \
	for (int i = 0; i < size; i++) \
		arr [i] = NULL; \
}

#define DELETE_POINTER(pointer) \
{ \
	if (pointer) \
	{ \
		delete pointer; \
		pointer = NULL; \
	} \
}

#define DELETE_ARRAY(pointer) \
{ \
	if (pointer) \
	{ \
		delete [] pointer; \
		pointer = NULL; \
	} \
}

#define DELETE_POINTER_ARRAY(arr, size) \
{ \
	if (arr) \
	{ \
		for (int i = 0; i < size; i++) \
		{ \
			if (!arr [i]) continue; \
			delete arr [i]; \
			arr [i] = NULL; \
		} \
		delete [] arr; \
		arr = NULL; \
	} \
}

#define CHECK_INDEX_RANGE(index, first, size) \
{ \
	if (index < first || index >= size) throw :: Collection :: Exception :: IndexOutOfRangeException (index, first, size); \
} 

#define CHECK_NULL_POINTER(pointer) \
{ \
	if (!pointer) throw :: Exception :: NullPointerException (); \
}
#endif