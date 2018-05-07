#pragma once

#include <iostream>
#include <fstream>
using namespace std;

#include "matrix.h"

class node
{
public:
	node* next;
	node*  prev;
	matrix* info;
	bool issorted;
};

class container
{
	node* head = NULL;
	node* tail = NULL;
public:
	node* Gethead()
	{
		return head;
	}
	int size = 0;
	int In(ifstream &ifst);
	void Out();
	void Clear ();
	void push(matrix* info);
	void dell();
	void ViewContSort(ofstream &ofst);
	void ViewCont(ofstream &ofst);
	void ContainerSort(int param);
	void ViewFiltred(ofstream &ofst, int met);


};
