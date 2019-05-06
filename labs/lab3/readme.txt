== Lab 3 ==

You can find the lab files in
~mike.noel/classes/cs261/students/labs/lab03. You will want to copy it into a
directory of your own. The file supplied.o contains code that can build,
display, and destroy a linear linked list.

For this lab, you will need to write the following two functions in list.cpp,
and add function prototypes for them to list.h.

*   void duplicate(node * head, node *& newHead)	

    recursively create a copy of the source list with head where newhead is the
    head of the destination list.

*    int removeTwo(node *& head)	

     recursively remove all the 2s from the list.

After implementing the two functions, you need to invoke the functions in
main.cpp to test. Please label your output so that the result is
clear. E.g. "duplicate copy of the list: " or "After removing all 2: "

Run your program in valgrind and make sure there are no memory errors or
memory leaks. Assuming the executable file is named app

     valgrind --tool=memcheck --leak-check=full ./app

For lab3 submission, create a tar file containing list.cpp, list.h, and
main.cpp. Use the turnin command to submit it.

     tar cvf lab03_files.tar main.cpp list.cpp list.h
     ~mike.noel/bin/turnin cs261 lab03_files.tar

----------------------------------------------------------------------

More Practice Problems: (not for submission)

Write a function to display the list in reverse order. Return the number of
nodes.

*   int displayReverse(node* head)

Write a function to add the data passed in to the function after every
instance of a 2 in the list. Return the number of nodes that were added to the
list.

*   int addAfter2(node*& head, int toAdd)

Write a Function to return the average of a list.

*   float average(node* head)
