#include "container.h"
 void container::push(matrix* info)
{
	node *x = new node;
	x->info = info;
	if (head != NULL)
	{
		x->next = head;
		x->prev = tail;
        tail->next = x;
		head->prev = x;
		tail = x;
	}
	else
	{
		head = x;
		tail = x;
		tail->next = x;
		head->prev = x;
	}
	size++;
};


void container::In(ifstream &ifst)
{
	matrix* cur;
	int count;
	ifst >> count;
	for (int i = 0; i < count; i++)
	{
		cur=matrix::inMatrix(ifst);
		push(cur);
	}

};

void container::dell()
{
	head->prev = tail->prev;
	delete tail->info;
	delete tail;
	head->prev->next = head;
	tail = head->prev;
	size--;
};

void container::Clear()
{
	while (head->next != head)
	{
		dell();
	}
	delete head->info;
	delete head;
	head = NULL;
	tail = NULL;
};

void container::Out()
{
	node *n;
	if (head != NULL)
	{
		n = head;
		while (n->next != head)
		{
			cout << n->info << endl;
			n = n->next;
		}
		cout << n->info << endl;
	}
	else cout << "container is empty" << endl;
};

void container::ViewCont(ofstream &ofst)
{
	node* n = head;
	
	if (n == NULL)
	{
		ofst << "Контейнер пуст" << endl;
		return;
	}
	ofst << "В контйнере " << size << " эл. " << endl;
	while (n->next != head)
	{
		n->info->MatrixOut(ofst);
		n = n->next;
	}
	
	n->info->MatrixOut(ofst);
	
};