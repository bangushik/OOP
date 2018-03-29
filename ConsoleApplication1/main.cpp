#include "container.h"
int main(int argc, char* argv[])
{
	container c;
	int param;
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	if (argc != 3)
	{
		cout << "incorrect command line!" << endl;
		exit(1);
	}
	c.In(ifst);
	cout << "Vvedite metod vivoda 1- diag 2-2d" << endl;
	cin >> param;
	c.ViewCont(ofst);
	c.ViewFiltred(ofst, param);
	

	
};

