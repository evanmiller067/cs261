#include "arr.h"

int sum(node * head[])
{
	//compute and return the sum of all the ints in table
	node * curr;
	int sum = 0;
	for(int i = 0; i < SIZE; i++)
	{
		curr = head[i];
		while(curr)
		{
			sum += curr->data;
			curr = curr->next;
		}
	}
	delete surr;
	return sum;
}
int removeTwo(node * head[])
{
	//remove all 2's from table, return table
	node * curr;
	node * previous;
	
	for(int i = 0; i < SIZE; i++)
	{
		previous = nullptr;
		curr = head[i];
		
		while(curr)
		{
			if(curr->data == 2)
			{
				if(!previous)
				{
					head[i] = head[i]->next;
					delete curr;
					curr = head[i];
					removed++;
				}
				else
				{
					previous->next = curr->next;
					delete curr;
					curr = previous->next;
					removed++;
				}
			}
			else
			{
				previous = curr;
				curr = curr->next;
			}
		}
	}
	return removed;
}
