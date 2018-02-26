#include "container.h"
int main(int argc, char* argv[])
{
	container c;
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	if (argc != 3)
	{
		cout << "incorrect command line!" << endl;
		exit(1);
	}
	c.In(ifst);
	c.ViewCont(ofst);


	return 0;
};