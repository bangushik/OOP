#include "matrixdiag.h"
void matrixDiag::In(ifstream &ifst)
{
	ifst >> size;
	Diagmatr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ifst >> Diagmatr[i];
	}
};

void matrixDiag::MatrixOut(ofstream &ofst)
{
	if (printtype==STRING||printtype == STOLB)
	{
		ofst << "��� ������������ �������: ";
		ofst << size << endl;
		for (int i = 0; i < size; i++)
		{
			for ( int j = 0;  j < size;  j++)
			{
				if (i == j)
				{
					ofst << Diagmatr[i] << " ";
				}
				else
					ofst << "0"<< " ";
			}
			ofst << endl;
			
		}
		ofst << endl;
	}
	if (printtype == LINE)
	{
		ofst << "��� ������������ �������: ";
		ofst << size << endl;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i == j)
				{
					ofst << Diagmatr[i] << " ";
				}
				else
					ofst << "0" << " ";
			}
		}
		ofst << endl;
	}
	
}