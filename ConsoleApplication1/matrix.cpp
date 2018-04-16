#include "matrix2d.h"
#include "matrixdiag.h"
#include "matrix.h"

matrix* matrix::inMatrix(ifstream &ifst)
{
	matrix* matr;
	int key;
	int prt;
	ifst >> key;
	if (key == 1)
	{
		matr = new matrix2d;
	}
	if (key == 2)
	{
		matr = new matrixDiag;
	}
	ifst >> prt;
	if (prt == 1)
	{
		matr->printtype=LINE;
	}
	if (prt == 2)
	{
		matr->printtype = STOLB;
	}
	if (prt == 3)
	{
		matr->printtype = STRING;
	}
	matr->In(ifst);
	return matr;
};
