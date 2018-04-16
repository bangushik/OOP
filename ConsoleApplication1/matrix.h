#pragma once

#include <iostream>
#include <fstream>
using namespace std;

class matrix
{
public:
	enum print { LINE,STOLB,STRING };
	print printtype;
	static matrix* inMatrix(ifstream &ifst);
	virtual void In(ifstream &ifst) = 0;
	virtual void MatrixOut(ofstream & ofst) = 0;
};