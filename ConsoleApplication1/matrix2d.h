#include "matrix.h"

#pragma once

class matrix2d:public matrix
{
	int collums;
	int strings;
	int** matr;
public:
	 void In(ifstream &ifst);
	 void MatrixOut(ofstream & ofst);
	 void matrix2d::MatrixSum(ofstream &ofst);
	 void matrix2d::MatrixOut2D(ofstream & ofst);
};