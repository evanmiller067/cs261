#include "dlist.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
	node * newHead = NULL;
	cout << "Duplicate list: " << endl;
	duplicate(head, newHead);
	cout << endl;	
	cout << "list after removal of 2s: " << endl;
	removeTwo(head);
	cout << endl;
    display(head);
    destroy(head);    
    return 0;
}
