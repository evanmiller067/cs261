#include "table.h"
#include <iostream>

using namespace std;

void duplicate(node * root, node *& newRoot)
{
	if(root == NULL)
		newRoot = NULL;
	else if(root->left == NULL && root->right == NULL)
		newRoot = NULL;
	else
	{
		newRoot = new node;
		newRoot->data = root->data;
		duplicate(root->left, newRoot->left);
		duplicate(root->right, newRoot->right);
	}
}
void remove(node *& root, int target)
{
	if (root == nullptr)
	{
		return;
	}
	//if key is smaller, go left
	if(target < root->data)
	{
		root->left = remove(root->left, target);
	}
	//if greater, go right
	else if(target > root->data)
	{
		root->right = remove(root->right, target);
	}
	//if equal, delete
	else
	{
		//node with one child
		if(root->left == nullptr)
		{
			node *temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == nullptr)
		{
			node *temp = root->left;
			free(root);
			return temp;
		}
		//if two childern, inorder successor
		node *temp = minValueNode(root->right);
		//copy inorder successor into node, overwritting node
		root->data = temp->data;
		//delete inorder successor
		root->right = remove(root->right, temp->data);
	}
	return root;
}
void minValueNode(node* node)
{
	node* curr = node;

	while(curr->left != nullptr)
	{
		curr = curr->left;
	}
	return curr;
}
