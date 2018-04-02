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
 bool matrix::Compare(matrix* m1, matrix* m2, int param)
{
	if (param == 1)
	{
		return (m1->sum > m2->sum);
	}
	if (param == 2)
	{
		return (m1->sum < m2->sum);
	}
}