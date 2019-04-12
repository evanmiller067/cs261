#include "arr.h"
using namespace std;

int main()
{
    node * head[SIZE] = {0,0,0,0,0};
    build(head);
    display(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
	cout << "Sum of all intergers: " << sum(head) << endl;
	cout << "Number of Two's removed: " << removeTwo(head) << endl;
	cout << "Table after removal: " << endl;

    display(head);
    destroy(head);
    
    return 0;
}
