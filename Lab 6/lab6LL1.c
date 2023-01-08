/***************************************
* EECS2031M – Lab 6 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_num: bryan712 *
* Yorku #:  216426744
****************************************/
#include <stdio.h>
#include <stdlib.h>

void insertBegining(int);

struct node { 
   int data;
   struct node * next;
};

struct node * head; 

main()
{
   head = NULL;

   insertBegining(100);
   insertBegining(200);
   insertBegining(300);
   insertBegining(400);   
   insertBegining(500);

   int i; 
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");  
}   

void insertBegining(int dat){
   struct node newNode;
   newNode.data = dat;

   newNode.next = head;
   
   head = &newNode;

}
