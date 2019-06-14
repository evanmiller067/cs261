#include "table.h"

//Please put the impelementation of the required functions here

int copyToArray(node * root, int intArray[])
/*{
	if (root == NULL)
		return NULL;

	int intArray[] = root->data;

	intArray = copyToArray(root->left, intArray);
	intArray = copyToArray(root->right, intArray);

	cout << "Array from BST: " << intArray;
}
*/
{}
void copyNonLeaf(node * root, node *& newRoot)
{
	if(root == NULL)
		newRoot = NULL;
	else if(root->left == NULL && root->right == NULL)
		newRoot = NULL;
	else
	{
	newRoot = new node;
	newRoot->data = root->data;
	copyNonLeaf(root->left, newRoot->left);
	copyNonLeaf(root->right, newRoot->right);
	}
}

