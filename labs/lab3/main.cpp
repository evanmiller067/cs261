#include "list.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
	node * newHead = NULL;
	cout << "duplicate copy of the list: " << endl;
	duplicate(head, newHead);
	cout << endl;
	cout << "After removing all 2: ";
	removeTwo(head);
	
    display(head);
    destroy(head);
    
    return 0;
}
