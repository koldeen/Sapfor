#ifndef CommCostH
#define CommCostH

//////////////////////////////////////////////////////////////////////
//
// CommCost.h: interface for the CommCost class.
//
//////////////////////////////////////////////////////////////////////

#include <cmath>
#include <vector>
#include <algorithm>

#include "Vm.h"
#include "DArray.h"
#include "DimBound.h"

//====
#include "LoopBlock.h"
//=***

typedef std::vector<long> lvector;
typedef std::vector<lvector> Dim2Array;


class VM;
class Block;
//====
class LoopBlock;
//=***

// ���������������� ��������
class CommCost {  

public:


	// ������ ���������� ���������� � ���������� ������ 
	// ������������ ����� ����� ����������� ����������� ������ vm 
	Dim2Array transfer;	
	VM *vm;  
	
	CommCost(VM *Avm);
	CommCost();
	virtual ~CommCost();

	// ����������� ��������������� ������� �� ��� ����������
	void CopyUpdate(DArray *FromArray, Block & readBlock);
//====
	void CopyUpdateDistr(DArray * FromArray, Block &readBlock, long p1);
	long GetLSize();
//	void calculate(); //������ ��� ��� ��� ���������� �������
	void Across(double call_time, long LoopSZ, LoopBlock** ProcBlock,int type_size);
//=***

	void BoundUpdate(DArray *daPtr, std::vector<DimBound> & dimInfo, bool IsCorner);

	// ���������������� ������� ������������ ��������� 
	// ���������� �������� ������� � ��������� ������
	double GetCost();

	CommCost & operator =(const CommCost &);

	// �������� ������ transfer � ������������
	// � ������������ ����������� ����� ������������ VM � ���������� 
	// �������� �� ������ ������������� ������� � �������
	void Update(DArray *oldDA, DArray *newDA);

};


#endif 
