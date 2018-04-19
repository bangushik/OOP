#include "container.h"
int main(int argc, char* argv[])
{
	container c;
	int param;
	int met;
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	if (argc != 3)
	{
		cout << "incorrect command line!" << endl;
		exit(1);
	}
	cout << "Vvedite naprav sotrirovki 1-vozr 2-ubiv" << endl;
	cin >> param;
	c.In(ifst);
	cout << "Vvedite metod vivoda 1- diag 2-2d 3-TRG" << endl;
	cin >> met;
	c.ViewCont(ofst);
	c.ContainerSort(param);
	c.ViewContSort(ofst);
	c.ViewFiltred(ofst, met);

};

