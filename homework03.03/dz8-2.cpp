//#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct Node 
{
	string str; 
	Node *next; 
};
struct queue_string 
{
	int size; 
	Node *first; 
	Node *last; 
};
void Creation(queue_string *Q) 
{
	Q->first = new Node;
	Q->first->next = NULL;
	Q->last = Q->first;
	Q->size = 0;
}
bool Full(queue_string *Q) 
{
	if (Q->first == Q->last) return true;
	else return false;
}
int Top(queue_string *Q) 
{
	return Q->first->next->str;
}
void Add(queue_string *Q) 
{
	int value;
	cout << "\nValue > "; cin >> value;
	Q->last->next = new Node;
	Q->last = Q->last->next;
	Q->last->str = value; 
	Q->last->next = NULL; 
	Q->size++;
	cout << "\nItem added\n\n";
}
void Delete(queue_string *Q) 
{
	Q->first = Q->first->next; 
	Q->size--;
	cout << "\nItem deleted\n\n";
}
int Size(queue_string *Q) 
{
	return Q->size;
}
void main() 
{
	
	queue_string Q;
	Creation(&Q);
	char number;
	do
	{
		cout << "1. Add item" << endl;
		cout << "2. Delete item" << endl;
		cout << "3. Print top item" << endl;
		cout << "4. To know the size of the queue" << endl;
		cout << "0. exit\n\n";
		cout << "number of the command > "; cin >> number;
		switch (number)
		{
		case '1': Add(&Q);
			break;
			
		case '2':
			if (Full(&Q)) cout << endl << "The queue is empty\n\n";
			else Delete(&Q);
			break;

		case '3':
			if (Full(&Q)) cout << endl << "The queue is empty\n\n";
			else { cout << "\nStart item: " << Top(&Q) << "\n\n"; }
			break;
			
		case '4':
			if (Full(&Q)) cout << endl << "The queue is empty\n\n";
			else cout << "\size of the queue: " << Size(&Q) << "\n\n";
			break;
			
		case '0': break;
		default: cout << endl << "The command is not defined\n\n";
			break;
		}
	} while (number != '0');
	system("pause");
}