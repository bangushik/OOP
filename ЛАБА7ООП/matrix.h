#pragma once

#include <iostream>
#include <fstream>
using namespace std;

class matrix
{
public:
	static matrix* inMatrix(ifstream &ifst);
	virtual void In(ifstream &ifst) = 0;
	virtual void MatrixOut(ofstream & ofst) = 0;
};