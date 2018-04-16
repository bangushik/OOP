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
	cout << "Vvedite naprav sotrirovki 1-vozr 2-ubiv" << endl;
	cin >> param;
	c.In(ifst);
	c.ViewCont(ofst);
	c.ContainerSort(param);
	c.ViewContSort(ofst);
	

	

	
};

