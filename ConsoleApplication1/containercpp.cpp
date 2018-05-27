		#include "container.h"
	 void container::Push(matrix* info)
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


		int container::In(ifstream &ifst)
		{
		matrix* cur;
		int count;
		ifst >> count;
		if (count <= 0)
		{
			cout << "Incorretc count of matrix" << endl;
			return 0;
		}
		for (int i = 0; i < count; i++)
		{
			cur=matrix::InMatrix(ifst);
			if (cur != 0)
			{
				Push(cur);
			}
			else return 0;
		}
		return count;
		};

		void container::Dell()
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
			Dell();
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
		ofst << "-------------------------------" << endl;
		while (n->next != head)
		{
			n->info->MatrixSum(ofst);
			n->info->MatrixOut(ofst);
			ofst << endl;;
			n = n->next;
		}	
		n->info->MatrixSum(ofst);
		n->info->MatrixOut(ofst);
		ofst << endl;
		
		};
		void container::ContainerSort(int param)
		{
		node *cur;
		node *next;
		matrix* temp;
		matrix* matr;
		bool isSorted;
	
		do
		{
			isSorted = true;
			cur = head;
			while (cur->next != head)
			{
				next = cur->next;
				if (cur->info->Compare(cur->info, next->info,param))
				{
					temp = cur->info;
					cur->info = next->info;
					next->info = temp;
					isSorted = false;
				}
				cur = cur->next;
			}
		} while (!isSorted);
		};
		void container::ViewContSort(ofstream &ofst)
		{
		node* n = head;

		if (n == NULL)
		{
			ofst << "Контейнер пуст" << endl;
			return;
		}
		ofst << endl;
		ofst << "В контейнере " << size << " эл-ов " << endl;
		ofst << "--------------------------------" << endl;
		while (n->next != head)
		{
			n->info->MatrixOut(ofst);
			ofst << endl;
			n = n->next;
		}
		n->info->MatrixOut(ofst);
		}
		void container::ViewFiltred(ofstream &ofst, int met)
		{
		node* n = head;
		if (n == NULL)
		{
			ofst << "Контейнер пуст" << endl;
			return;
		}
		ofst << endl;
		ofst << "В контйнере " << size << " эл. " << endl;
		ofst << "----------------------" << endl;
		while (n->next != head)
		{
			if (met == 1)
			{
				n->info->MatrixOutDiag(ofst);
				ofst << endl;
				n = n->next;
			}
			if (met == 2)
			{
				n->info->MatrixOut2D(ofst);
				ofst << endl;
				n = n->next;
			}
			if (met == 3)
			{
				n->info->MatrixOutTrg(ofst);
				ofst << endl;
				n = n->next;
			}
		}
		if (met == 1)
			
		{
			n->info->MatrixOutDiag(ofst);
			ofst << endl;
		}
		if (met == 2)
		{
			n->info->MatrixOut2D(ofst);
			ofst << endl;
		}
		if (met == 3)
		{
		n->info->MatrixOutTrg(ofst);
		ofst << endl;
		}
		}

