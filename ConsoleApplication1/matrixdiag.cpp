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
	ofst << "Это диагональная матрица: ";
	ofst << size << endl;
	for (int i = 0; i < size; i++)
	{
		ofst << Diagmatr[i] << " ";
	}
	ofst << endl;
}