#include "matrixdiag.h"
void matrixDiag::In(ifstream &ifst)
{
	ifst >> size;
	Diagmatr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ifst >> Diagmatr[i];
	}
};

void matrixDiag::MatrixOut(ofstream &ofst)
{
	ofst << "��� ������������ �������: ";
	ofst << size << endl;
	for (int i = 0; i < size; i++)
	{
		ofst << Diagmatr[i] << " ";
	}
	ofst << endl;
};
void matrixDiag::MatrixOutDiag(ofstream & ofst)
{
	MatrixOut(ofst);
};