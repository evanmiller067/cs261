#include "list.h"
#include <iostream>

using namespace std;

void duplicate(node* head, node*& newHead)
{
	if(head)
	{
		node* newNode = new node;
		newHead = newNode;
		newNode->data = head->data;
		newNode->next = head->next;
		cout << newNode->data;
		if(head->next)
		{
			cout << " -> ";
		}
		duplicate(head->next, newHead->next);
	}
}
int removeTwo(node*& head)
{
	node* curr = head;
	if(curr == nullptr)
	{
		return 0;
	}
	if(curr->data == 2)
	{
		head = head->next;
		delete curr;
		removeTwo(head);
	}
	if(curr->next && curr->next->data == 2)
	{
		node* removal = curr->next;
		curr->next = removal->next;
		delete removal;
	}
	return removeTwo(head->next);
}
