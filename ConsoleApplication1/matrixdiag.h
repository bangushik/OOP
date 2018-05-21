	#pragma once
	#include "matrix.h"

	class matrixDiag :public matrix
	{
	int size;
	int* diagmatr;
public:
	void In(ifstream &ifst);
	void MatrixOut(ofstream & ofst);
	void MatrixSum(ofstream &ofstint);
	void MatrixOutDiag(ofstream &ofst);
	};
