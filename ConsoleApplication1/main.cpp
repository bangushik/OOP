#include "container.h"
#include "Check.h"
int main(int argc, char* argv[])
{
	container c;
	Check check;
	int param =0;
	int met =0;
	int count;
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	if (argc != 3)
	{
		cout << "incorrect command line!" << endl;
		exit(1);
	}
	check.checkIn(ifst, ofst);
	while (!param)
	{
		cout << "Vvedite naprav sotrirovki 1-vozr 2-ubiv" << endl;
		cin >> param;
		if (param != 1 && param != 2)
		{
			cout << "Incorect param" << endl;
			param = 0;
		}
	}
	count=int(c.In(ifst));
	if (count = 0)
	{
		return 0;
	}
	cout << "Vvedite metod vivoda 1- diag 2-2d 3-TRG" << endl;
	while (!met)
	{
		cin >> met;
		if (met != 1 && met != 2 && met != 3)
		{
			cout << "Incorect met" << endl;
			met = 0;
		}
	}
	c.ViewCont(ofst);
	c.ContainerSort(param);
	c.ViewContSort(ofst);
	c.ViewFiltred(ofst, met);

};

