#include "matrix2d.h"
#include "matrixdiag.h"
#include "Trgmatr.h"
#include "matrix.h"

matrix* matrix::InMatrix(ifstream &ifst)
{
	matrix* matr;
	int key;
	int prt;
	ifst >> key;
	if (key != 1 && key != 2 && key != 3)
	{
		cout << "Incottect matrix type" << endl;
		return 0;
	}
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
	if (prt != 1 && prt != 2 && prt != 3)
	{
		prt = 1;
	}
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
	if (ifst.fail())
	{
		cout << "Input fail;" << endl;
		return 0;
	}
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
	void matrix::MatrixOutDiag(ofstream & ofst)
	{

	};
	void matrix::MatrixOut2D(ofstream & ofst)
	{

	};
	void matrix::MatrixOutTrg(ofstream &ofst)
	{

	}
