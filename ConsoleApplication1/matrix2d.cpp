#include "matrix2d.h"
void matrix2d::In(ifstream &ifst)
{
	ifst >> strings;
	ifst >> collums;
	matr = new int*[strings];
	for (int i = 0; i < strings; i++)
	{
		matr[i] = new int[collums];
		for (int j = 0; j < collums; j++)
		{
			ifst >> matr[i][j];
		}

	}
};

void matrix2d::MatrixOut(ofstream &ofst)
{
	ofst << "��� ���������� �������: ";
	ofst << strings << "x" << collums << endl;
	for (int i = 0; i < strings; i++)
	{
		for (int j = 0; j < collums; j++)
		{
			ofst << matr[i][j] << " ";
		}
		ofst << endl;
	}
};
void matrix2d::MatrixSum(ofstream &ofst)
{
	sum = 0;
	for (int i = 0; i < strings; i++)
	{
		for (int j = 0; j < collums; j++)
		{
			sum = sum + matr[i][j];
		}
	}
	ofst <<"Summa: "<< sum;
	
}