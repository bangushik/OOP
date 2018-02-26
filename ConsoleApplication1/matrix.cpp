#include "matrix2d.h"
#include "matrixdiag.h"
#include "matrix.h"

matrix* matrix::inMatrix(ifstream &ifst)
{
	matrix* matr;
	int key;
	ifst >> key;
	if (key == 1)
	{
		matr = new matrix2d;
	}
	if (key == 2)
	{
		matr = new matrixDiag;
	}
	matr->In(ifst);
	return matr;
};
