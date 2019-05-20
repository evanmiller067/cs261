#include "dlist.h"
#include <iostream>
using namespace std;

void duplicate(node * head, node *& newHead)
{
	if(head)
	{
		node * tempNode = new node;
		newHead = tempNode;
		tempNode->data = head->data;
		tempNode->next = head->next;
		cout << tempNode->data;
		duplicate(head->next, newHead->next);
	}
}

int removeTwo(node *& head)
{
	node * temp = head;
	if(temp == nullptr)
		return 0;
	if(temp->data == 2)
	{
		head = head->next;
		delete temp;
		removeTwo(head);
	}
	if(temp->next != nullptr && temp->next->data == 2)
	{
		node * rNode = temp->next;
		temp->next = rNode->next;
		delete rNode;
	}
	return removeTwo(head->next);
}

