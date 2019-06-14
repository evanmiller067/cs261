#ifndef TABLE_H
#define TABLE_H
//table.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;
    node * left;
    node * right;;
};

void build(node * & root);  //supplied
void display(node *  root); //supplied
void destroy(node * & root); //supplied

/* ************** PLACE YOUR PROTOTYPE HERE ***************** */
int copyToArray(node * root, int intArray[]);
void copyNonLeaf(node * root, node *& newRoot);

/*
•	int copyToArray(node * root, int intArray[])	
recursively copy all the items in the tree to intArray and return the number of items. intArray needs to be sorted.

•	void copyNonLeaf(node * root, node *& newRoot)	
recursively copy all the non-leaf nodes in the source tree  with root. newRoot is the root for destination tree. The destination tree should only contain the non-leaf nodes in the source tree.

*/ 
#endif
