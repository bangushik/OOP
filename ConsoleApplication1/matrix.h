#pragma once

#include <iostream>
#include <fstream>
using namespace std;

class matrix
{
	
public:

	int sum=0;
	enum print { LINE,STOLB,STRING };
	print printtype;
	static matrix* inMatrix(ifstream &ifst);
	virtual void In(ifstream &ifst) = 0;
	virtual void MatrixOut(ofstream & ofst) = 0;
	virtual void MatrixSum(ofstream & ofst)=0;
	bool Compare(matrix* m1, matrix* m2, int param);
	virtual void MatrixOutDiag(ofstream & ofst);
	virtual void MatrixOut2D(ofstream & ofst);
	virtual void MatrixOutTrg(ofstream & ofst);

};