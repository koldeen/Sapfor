#include "../dep_h/loop/ivar_collection.h"


namespace Analyzer
{
	namespace Loop
	{
		int IndexVariableCollection :: Add (IndexVariable* iVar)
		{
			if (CheckCollectionCapacity()) iVars [size++] = iVar;			
			else
			{			
				int curSize = size;
				allocatedSize++;
				IndexVariable** temp = iVars;
				iVars = new IndexVariable* [allocatedSize];
				size = 0; //���������� � ����������� iVars ������ ����������� �������
				AddRange (temp, curSize); //size == curSize
				Add (iVar); //size == size + 1
				delete [] temp;
			}					
			return size - 1;			
		}

		int IndexVariableCollection :: AddRange (IndexVariable** varsRange, int rangeSize)
		{
			if (rangeSize <= 0) return NOTHING_ADD;

			CHECK_NULL_POINTER (varsRange);
				
			if (CheckCollectionCapacity (rangeSize))
			{
				for (int i = 0; i < rangeSize; i++)
					iVars [size++] = varsRange [i];				
			}
			else 
			{	
				int curSize = size;
				IndexVariable** temp = iVars;
				allocatedSize = size + rangeSize; //� ��� ������� (size) ����������� ����������� (rangeSize)
				iVars = new IndexVariable* [allocatedSize];
				size = 0; //���������� � ����������� iVars ������ ����������� �������
				AddRange (temp, curSize);
				AddRange (varsRange, rangeSize);					
				delete [] temp;			
			}				
			return size - rangeSize;
		}		
	}
}