#include "arr.h"
using namespace std;

int main()
{
    node * head[SIZE] = {0,0,0,0,0};
    build(head);
    display(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
	cout << "Sum of all intergers: " << sum(head) << endl;
	cout << "after a removing all 2's: " << removeTwo(head);


    display(head);
    destroy(head);
    
    return 0;
}
