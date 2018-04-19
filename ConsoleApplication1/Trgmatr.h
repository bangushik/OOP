
#include "matrix.h"

class matrixTRG :public matrix
{
	int size;
	int* trg;
public:
	void In(ifstream &ifst);
	void MatrixOut(ofstream &ofst);
	void matrixTRG::MatrixSum(ofstream &ofst);
	void MatrixOutTrg(ofstream &ofst);
};
#pragma once
