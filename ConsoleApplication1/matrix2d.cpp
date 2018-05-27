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
	if (printtype == STRING)
	{
		ofst << "Это двухмерная матрица: ";
		ofst << strings << "x" << collums << endl;
		for (int i = 0; i < strings; i++)
		{
			for (int j = 0; j < collums; j++)
			{
				ofst << matr[i][j] << " ";
			}
			ofst << endl;
		}
	}
	if (printtype == STOLB)
	{
		ofst << "Это двухмерная матрица: ";
		ofst << strings << "x" << collums << endl;
		for (int i = 0; i < collums; i++)
		{
			for (int j = 0; j < strings; j++)
			{
				ofst << matr[j][i] << " ";
			}
			ofst << endl;
		}
	}
	if (printtype == LINE)
	{
		ofst << "Это двухмерная матрица: ";
		ofst << strings << "x" << collums << endl;
		for (int i = 0; i < strings; i++)
		{
			for (int j = 0; j < collums; j++)
			{
				ofst << matr[i][j] << " ";
			}
		}
	}
	ofst <<"Summa "<< sum << endl;
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
	
	
	};
	void matrix2d::MatrixOut2D(ofstream & ofst)
	{
	MatrixOut(ofst);
	};

