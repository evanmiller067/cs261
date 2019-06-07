#include "dlist.h"
//Please place your name here:
//Evan Miller
//
using namespace std;


int main()
{
    list object;
    object.build();
    object.display();

    //PLEASE PUT YOUR CODE HERE to call the functions
	object.count(object->head);
//	cout << "list after insert: " << object.insert(head, newInt, position) << endl;
//	cout << "list after removal: " << object.remove(head, position) << endl;
	

    object.display();
    
    return 0;
}
