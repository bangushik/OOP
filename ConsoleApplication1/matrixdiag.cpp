	#include "matrixdiag.h"
	void matrixDiag::In(ifstream &ifst)
	{
	ifst >> size;
	diagmatr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ifst >> diagmatr[i];
	}
	};

	void matrixDiag::MatrixOut(ofstream &ofst)
	{	
	if (printtype==STRING||printtype == STOLB)
	{
		ofst << "Это диагональная матрица: ";
		ofst << size << endl;
		for (int i = 0; i < size; i++)
		{
			for ( int j = 0;  j < size;  j++)
			{
				if (i == j)
				{
					ofst << diagmatr[i] << " ";
				}
				else
					ofst << "0"<< " ";
			}
			ofst << endl;
			
		}
		
	}
	if (printtype == LINE)
	{
		
		ofst << "Это диагональная матрица: ";
		ofst << size << endl;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i == j)
				{
					ofst << diagmatr[i] << " ";
				}
				else
					ofst << "0" << " ";
			}
		}
		ofst << endl;
	}
	ofst << "Summa " << sum << endl;
	
	};
	void matrixDiag::MatrixSum(ofstream &ofst)
	{
	sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + diagmatr[i];
	}
	

	}
	void matrixDiag::MatrixOutDiag(ofstream & ofst)
	{
	matrixDiag::MatrixOut(ofst);
	};

