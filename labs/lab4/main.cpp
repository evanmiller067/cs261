#include "clist.h"
using namespace std;

int main()
{
    node * head = NULL;
    node * copy = NULL;
    build(head);
    display(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
	int value = 10;
	cout << "value added to list: " << value << endl;
	addHead(head, value);
	cout << "myDisplay: ";
	myDisplay(head);

    display(head); //resulting list after your function call!
    destroy(head);
    
    return 0;
}
