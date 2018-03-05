#include "Trgmatr.h"
void matrixTRG::In(ifstream &ifst)
{
	
	ifst >> size;
	int koll = (size + 1)*(size / 2) + 10;
	trg = new int[koll];
	int k = 0;
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			ifst >> temp;
			if (j >= i)
			{
				trg[k] = temp;
			}
			k++;
		}

	}
	

};


void matrixTRG::MatrixOut(ofstream &ofst)
{
	ofst << "Это треугольная матрица: ";
	ofst << "размер " << size <<  " " << "X "<< size << endl;
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j >= i)
			{
				ofst << trg[k] << " ";


			}
			else
			{
				ofst << "0" << " ";
			}
			k++;
		}
		ofst << endl;
	}
	ofst << endl;

};