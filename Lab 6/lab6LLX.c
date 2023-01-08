/***************************************
* EECS2031M – Lab 6 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_num: bryan712 *
* Yorku #:  216426744
****************************************/
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 50
#define MAX_LEN 30

struct integers
{
  int int1;
  int int2;
};

struct node {  // list 'node' struct
   int data;
   struct node *next;
};


void init( );
void display();
int len();
int search(int);
int get(int);
void insert(int d );
void insertAfter(int key, int index);
void delete (int d);

struct node * head;   // global variable, the head of the linkedlist

int main()
{
    int i, key, index;

    struct integers arr[MAX_LEN]; // an array of 30 structs

    char buffer[BUFFER_SIZE];
    int value1, value2;
    int count= 0;

    FILE * file;
    file = fopen("data.txt", "r");

    while (fgets(buffer, BUFFER_SIZE, file) != NULL) // read from disk file, line by line, as string  
    {
       sscanf(buffer, "%d %d", &value1, &value2);   // tokenize buffer and store into value1 and value2

       arr[count].int1 = value1;
       arr[count].int2 = value2;
       count++;
    }

    fclose(file);

    /* print the array of structures */
    for(i=0; i< count; i++){
        printf("arr[%d]: %d %d\n", i, arr[i].int1, arr[i].int2);
    }
    printf("\n");

    // now building up the list by reading from the array of structures
    init();

    i=0;
    for(; i< count; i++){
        int value;
        // read two ints from array of strcutures, sum up to variable value
        struct integers valStruc = arr[i];
	    value = valStruc.int1 + valStruc.int2;  // your code here. The only code need to do in main()

        //no more coding in main
        insert(value);
        printf("insert %d: (%d)", value, len());
        display();
    }

    int removeList [] = {0,1,2,3,5,6,7,8,9, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key=removeList[i]) != -10000){
        delete(key);
        printf("remove %d: (%d)", key, len());
        display();
        i++;
    }

    // insert again
    int addList [] = {7,3,5,6,8,9, 2,0,1, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key=addList[i]) != -10000){ 
        insert(key);
        printf("insert %d: (%d)", key, len()); display();
        i++;
    }

    // search
    printf("\n");
    int searchList [] = {5,50,9,19,0,-4, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key = searchList[i++]) != -10000 ){
        printf("search %3d ....  ", key);
        if (search(key))
            printf("found\n");
        else
            printf("not found\n");
    }

    int v;
    v = get(0);  printf("\nget(0): %d\n", v);
    v = get(3);  printf("get(3): %d\n", v);
    v = get(6);  printf("get(6): %d\n", v);
    v = get(8); printf("get(8): %d\n", v);

    // insert after
    printf("\n");
    key =-4; index =2; insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display();

    key =-6; index = 0; insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display();

    key =-8; index = 6; insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display();

    v = get(0);  printf("\nget(0): %d\n", v);
    v = get(3);  printf("get(3): %d\n", v);
    v = get(6);  printf("get(6): %d\n", v);
    v = get(8); printf("get(8): %d\n\n", v);

}

/* Initialize the list. */
void init( )
{
    head = NULL;
}

/* Print the content of the list. */
void display()
{
    struct node *current = head;
    while (current != NULL){
       printf( "%4d", current->data );
       current = current -> next;
    }
    printf( "\n" );
}

/* return the number of nodes in the linked list */
int len()
{
    struct node * current = head;
    int count=  0;
    while (current != NULL)
    {
       count++;
       current = current -> next;
    }
    return count;
}

/* return whether a node with key exists in list */
/* return "true" is in the list, return "false" otherwise
/* assume the list is not empty */
int search (int key)
{
    struct node * current = head;
    while (current != NULL ){
       if (current->data == key)
         return 1;
       current = current -> next;
  }
  return 0;
}

/* return the data value of node at index index
   assume the list is not empty, and index is in [0, len()-1] 
*/
int get(int index)
{
    struct node * current = head;
    int i = 0;
    while (i < index){
        current = current -> next;
        i++;
    }    
    return current -> data;
}

/* Insert a new data element with key d into the end of the list. */
/* Hint: You need to consider the special case that the list is empty, 
   and the general case that the list is not empty */
void insert(int d)  //  at the end
{
    struct node * newP = malloc (sizeof(struct node));
    newP -> data = d;
    if (head == NULL){
        newP -> next = head;
        head = newP;
    }
    else{
        struct node * current = head;
        while (current -> next != NULL)
        {
            current  = current -> next;
        }
       newP-> next = current->next;
       current-> next = newP;
    }
}
 
/* bonus */
/* insert in the middle. 
  insert new node with data d, after the node of index 'index'
  assume the list is not empty, and index is in [0, len()-1] 
 */
void insertAfter(int d, int index )
{
    struct node * newP = malloc (sizeof(struct node));
    newP -> data = d;

    struct node * current = head;
    int i = 0;
    while (i < index){
        current = current -> next;
        i++;
    }
    newP->next = current->next;
    current->next = newP;
}

/* lab version */
/* Remove the node with value d from the list */
/* assume the list is not empty  */
/* assume the node to be deleted is in the list */
/* assume no duplicated keys in the list */
/* You don't have to free the space */
void delete(int d)
{
    if (len() == 0){
        fprintf(stderr, "empty");
        return;
    }
   /* special case: to be removed is the first, need to change head  */
   if (head -> data == d){
        struct node * tmp = head;
        head = head -> next;
        free(tmp);
    }

   else  // general case, remove from the middle or the last
   {
        struct node * current = head;
        while ( current -> next-> data != d ){
            current  = current  -> next;
        }
        struct node * tmp = current -> next;
        current -> next = current->next->next;
        free(tmp);
   }
}
