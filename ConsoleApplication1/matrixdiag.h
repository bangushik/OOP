
#include "matrix.h"

class matrixDiag :public matrix
{
	int size;
	int* Diagmatr;
public:
	void In(ifstream &ifst);
	void MatrixOut(ofstream & ofst);
};
#pragma once
