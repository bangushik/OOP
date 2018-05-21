	#pragma once
	#include "matrix.h"

	class matrixTRG :public matrix
	{
	int size;
	int* trgMatrix;
public:
	void In(ifstream &ifst);
	void MatrixOut(ofstream &ofst);
	void matrixTRG::MatrixSum(ofstream &ofst);
	void MatrixOutTrg(ofstream &ofst);
	};

