#include "matrix2d.h"
#include "matrixdiag.h"
#include "Trgmatr.h"
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
	if (key == 3)
	{
		matr = new matrixTRG;
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