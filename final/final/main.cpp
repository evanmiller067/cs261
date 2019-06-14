#include "table.h"

#include <iostream>

using namespace std;

int main()
{
    node * root = NULL;
    build(root);
    display(root);
	
    /*  PLACE YOUR FUNCTION CALL HERE */


//	copyToArray(root, int newArray[]);
	node * newRoot = NULL;
	cout << "\n Copy of BST: ";
	copyNonLeaf(root, newRoot);
	
    display(root);
    destroy(root);
    return 0;
}
