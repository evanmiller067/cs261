#include "table.h"

#include <iostream>

using namespace std;

int main()
{
    node * root = NULL;
    build(root);
    display(root);

    /*  PLACE YOUR FUNCTION CALL HERE */
	
	node * newRoot = NULL;
	cout << "duplicate copy of the Tree: " << endl;
	duplicate(root, newRoot);
	
	cout << endl;
	cout << "after removing 2: " << endl;
	remove(root, 2);
    display(root);
    destroy(root);
    return 0;
}
