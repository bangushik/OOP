	#include "Trgmatr.h"
	void matrixTRG::In(ifstream &ifst)
	{
	ifst >> size;
	int koll = (size + 1)*(size / 2) + 10;
	trgMatrix = new int[koll];
	int k = 0;
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			ifst >> temp;
			if (j >= i)
			{
				trgMatrix[k] = temp;
			}
			k++;
		}
	}
	};

	void matrixTRG::MatrixOut(ofstream &ofst)
	{
	if (printtype == STRING)
	{
		ofst << "Это треугольная матрица: ";
		ofst << "размер " << size << " " << "X " << size << endl;
		int k = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (j >= i)
				{
					ofst << trgMatrix[k] << " ";
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
	}
		if (printtype == STOLB)
		{
			ofst << "Это треугольная матрица: ";
			ofst << "размер " << size << " " << "X " << size << endl;
			int k = 0;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (j < i)
					{
						ofst << trgMatrix[k] << " ";
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
		}
		if (printtype == LINE)
		{
			ofst << "Это треугольная матрица: ";
			ofst << "размер " << size << " " << "X " << size << endl;
			int k = 0;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (j >= i)
					{
						ofst << trgMatrix[k] << " ";
					}
					else
					{
						ofst << "0" << " ";
					}
					k++;
				}
				
			}
			ofst << endl;
		}
		ofst << "Summa " << sum << endl;
	};
	void matrixTRG::MatrixSum(ofstream &ofst)
	{
	sum = 0;
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j >= i)
			{
				sum = sum + trgMatrix[k];
			}
			else
			{}
			k++;
		}
	}
	};
	void matrixTRG::MatrixOutTrg(ofstream & ofst)
	{
	MatrixOut(ofst);
	}