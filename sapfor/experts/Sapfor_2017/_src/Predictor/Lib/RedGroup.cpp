//////////////////////////////////////////////////////////////////////
//
// RedGroup.cpp: implementation of the RedGroup class.
//
//////////////////////////////////////////////////////////////////////

#include "RedGroup.h"

using namespace std;

extern ofstream prot; 
 
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

RedGroup::RedGroup(VM *AvmPtr):
vmPtr(AvmPtr)
{
	redVars = vector<RedVar *>(0);
	CentralProc = vmPtr->GetCenterLI();
	TotalSize = 0;
}

RedGroup::~RedGroup()
{

}

//////////////////////////////////////////////////////////////////////
// Add reduction variable to reduction groupe
//////////////////////////////////////////////////////////////////////

void RedGroup::AddRV(RedVar * ARedVar)
{
	redVars.push_back(ARedVar);
	TotalSize += ARedVar->GetSize();
}

//////////////////////////////////////////////////////////////////////
// Calculate reduction time
//////////////////////////////////////////////////////////////////////

double RedGroup::StartR(DArray *APattern, long ALoopRank, const vector<long>& AAxisArray)
{
	double	time = 0;
	long	i, 
			redBlSize = 1, 
			redBlCenterDist = 0;
	vector<long> loopAlign(ALoopRank);
	int		dir;
	long	LSize = vmPtr->GetLSize();
	double	TStart = vmPtr->getTStart();
	double	TByte = vmPtr->getTByte();
	bool	redBlEmpty = true;

	// ???��� ������-�� ������, �.�. ���.���������� ���������� �� ���� ����. ������, 
	// � ������ ������ �� ����. ������, � ��� �� ������ ���������
	// � ��� �� ��� ������ ���������� � ����� ���� ���������, �� ��� 
	// � ������ ������� Update
	// ��� �������� �� ����� ��� ��� �� ����� �� ��� ���������� ���� ��������
	// (���� ������� �� �� ���� ����.������ ��������� ����)

	if (APattern->Repl)
		return 0; 

	for (i = 0; i < ALoopRank; i++) {
		loopAlign[i] = APattern->GetMapDim(AAxisArray[i], dir);
//		prot << "loopAlign[" << i << "] = " << loopAlign[i] << endl;
	}


	switch (vmPtr->getMType()) {
		case mach_ETHERNET :
			for (i = 0; i < ALoopRank; i++) {
				if (loopAlign[i]) {
					redBlSize *= vmPtr->GetSize(loopAlign[i]);
					redBlEmpty = false;
				}
			}

			if (!redBlEmpty)
				time = (TStart + TByte * TotalSize) * (redBlSize + LSize - 2);

			break;
			
		case mach_TRANSPUTER :
			for (i = 0; i < ALoopRank; i++) {
				if (loopAlign[i]) {
					redBlCenterDist += vmPtr->GetSize(loopAlign[i]) / 2;
					redBlEmpty = false;
				}
			}

			if (!redBlEmpty)
				time = (TStart + TByte * TotalSize) * (vmPtr->GetDistance(0, CentralProc) 
						+ redBlCenterDist);

			break;

		case mach_MYRINET :
			for (i = 0; i < ALoopRank; i++) {
				if (loopAlign[i]) {
					redBlSize *= vmPtr->GetSize(loopAlign[i]);
					redBlEmpty = false;
//					prot << "i = " << i << ", redBlSize = " << redBlSize << endl;
				}
			}

			if (!redBlEmpty) {
				time = (TStart + TByte * TotalSize) * (redBlSize + LSize - 2);
			}

			break;
			
	}
	// ? ������ ����� �� const ��������� � BOUNDREPL
	return time  * vmPtr->getScale();
}

//////////////////////////////////////////////////////////////////////
// Calculate reduction time
//////////////////////////////////////////////////////////////////////

double RedGroup::StartR(AMView *APattern, long ALoopRank, const vector<long>& AAxisArray)
{
	double time = 0;
	long i, redBlSize = 1, redBlCenterDist = 0;
	vector<long> loopAlign(ALoopRank);
//	int dir;
	long LSize = vmPtr->GetLSize();
	double TStart = vmPtr->getTStart();
	double TByte = vmPtr->getTByte();
	bool redBlEmpty = true;

	// ???��� ������-�� ������, �.�. ���.���������� ���������� �� ���� ����. ������,
	// � ������ ������ �� ����. ������, � ��� �� ������ ���������
	// � ��� �� ��� ������ ���������� � ����� ���� ���������, �� ��� � 
	// ������ ������� Update
	// ��� �������� �� ����� ��� ��� �� ����� �� ��� ���������� ���� ��������
	// (���� ������� �� �� ���� ����.������ ��������� ����)

 	if (APattern->Repl)
		return 0; 

	for (i = 0; i < ALoopRank; i++)
		loopAlign[i] = AAxisArray[i];
//		loopAlign[i] = APattern->GetMapDim(AAxisArray[i], dir);

	switch (vmPtr->getMType()) {
		case mach_ETHERNET :
			for (i = 0; i < ALoopRank; i++) {
				if (loopAlign[i]) {
					redBlSize *= vmPtr->GetSize(loopAlign[i]);
					redBlEmpty = false;
				}
			}

			if (!redBlEmpty)
				time = (TStart + TByte * TotalSize) * (redBlSize + LSize - 2);

			break;
			
		case mach_TRANSPUTER :
			for (i = 0; i < ALoopRank; i++) {
				if (loopAlign[i]) {
					redBlCenterDist += vmPtr->GetSize(loopAlign[i]) / 2;
					redBlEmpty = false;
				}
			}

			if (!redBlEmpty)
				time = (TStart + TByte * TotalSize) * (vmPtr->GetDistance(0, CentralProc) 
						+ redBlCenterDist);

			break;
	}
	// ? ������ ����� �� const ��������� � BOUNDREPL
	return time;
}

