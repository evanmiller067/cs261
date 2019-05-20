#include "clist.h"
#include <iostream>

using namespace std;

void addHead(node *& head, int value)
{
	node * newNode = new node;
	node * temp = head;
	while(temp->next != head)
	{ 
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

void myDisplay(node * head)
{
	node * endCheck = head->next;
	cout << head->data;
	helper(head, endCheck);
	cout << head->data << endl;
}
void helper(node * head, node * endCheck)
{
	cout << endCheck->data;
	if(endCheck->next->data != head->data)
	{
		helper(head, endCheck->next);
	}
}
