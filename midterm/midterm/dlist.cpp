#include "dlist.h"
//Please put your implementation of required functions here

int count(node * head)
{
	
	//return number of node in dbl linked list
	int countNum;	
	if(head != nullptr)
	{
		countNum++;
	}
	count(head->next);
	return countNum;
}
/*
void insert(node *& head, int newInt, int position)
{
	//insert newInt at index "position"
	
}

int remove(node *& head, int position)
{
    node * temp = NULL;

	if(head != nullptr)
	{
		if(head->data == position)
		{
			head->previous =
			head->next = 
		}
	}
}
*/
