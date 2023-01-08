/***************************************
* EECS2031M – Lab 6 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_num: bryan712 *
* Yorku #:  216426744
****************************************/
#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers

int main(int argc, char *argv[])
{
     int i;
       
     setArr(0, -10);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);
       
        
     for(i=0; i<5;i++) 
        printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i) );   /* should be -10,100, 200,300,400 */
     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
     int i = v;
     *arr[index] = &i;
}


/* Once again we get a Segmentation fault: 11 error.
The reason we get this error is becuase in the setArr 
function we are assigning *arr[index] = &i. This incorrect.
as *arr[index] is referring to the value stored at the address
that arr[index] points to. arr[index] still has not been
assigned an address to point to. &i refers to the memory address
of the integer i variable. So *arr[index] = &i, is incorrect, as
you are trying to store an address of a variable as the value of 
the address that the pointer is pointing to, which it has been 
assigned one yet. The correct statement would be to have
arr[index] = &i.
*/




