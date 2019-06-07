struct Node { 
   int data; 
   struct Node *prev; 
   struct Node *next; 
}; 
struct Node* head = NULL; 

//insert link at the first location
void insertFirst(int key, int data) {

   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
	
   if(isEmpty()) {
      //make it the last link
      last = link;
   } else {
      //update first prev link
      head->prev = link;
   }

   //point it to old first link
   link->next = head;
	
   //point first to new first link
   head = link;
}

//delete first item
struct node* deleteFirst() {

   //save reference to first link
   struct node *tempLink = head;
	
   //if only one link
   if(head->next == NULL) {
      last = NULL;
   } else {
      head->next->prev = NULL;
   }
	
   head = head->next;
	
   //return the deleted link
   return tempLink;
}

//insert link at the last location
void insertLast(int key, int data) {

   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
	
   if(isEmpty()) {
      //make it the last link
      last = link;
   } else {
      //make link a new last link
      last->next = link;     
      
      //mark old last node as prev of new link
      link->prev = last;
   }

   //point last to new last node
   last = link;
}

Doubly Linked List-------------------------

//insert link at the first location
void insertFirst(int key, int data) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data= data;
	
   if (isEmpty()) {
      head = link;
      head->next = head;
   } else {
      //point it to old first node
      link->next = head;
		
      //point first to new first node
      head = link;
   }   
}

//delete first item
struct node * deleteFirst() {
   //save reference to first link
   struct node *tempLink = head;
	
   if(head->next == head) {  
      head = NULL;
      return tempLink;
   }     

   //mark next to first link as first 
   head = head->next;
	
   //return the deleted link
   return tempLink;
}

//display the list
void printList() {
   struct node *ptr = head;
   printf("\n[ ");
	
   //start from the beginning
   if(head != NULL) {
      while(ptr->next != ptr) {     
         printf("(%d,%d) ",ptr->key,ptr->data);
         ptr = ptr->next;
      }
   }
	
   printf(" ]");
}
