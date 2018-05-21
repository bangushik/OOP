	#include "check.h"
	void check::CheckIn(ifstream&ifst, ofstream&ofst)
	{
	if(!ifst)
	{ 
		cout << "Input file not opened;" << endl;
	}
	if (!ofst)
	{
		cout << "Output file not opened;" << endl;
	}
	};
