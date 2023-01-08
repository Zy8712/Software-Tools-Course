/***************************************
* EECS2031M – Lab 6 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_num: bryan712 *
* Yorku #:  216426744
****************************************/
#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers, global variable

int main(int argc, char *argv[])
{
     int i;
     setArr(0, -10);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);
       
     for(i=0; i<5;i++) 
         printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i));  /* should be -10, 100, 200, 300, 400 */

     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
     int i = v; 
     * arr[index] = i;
}

/* When running the program it results in a Segmentation fault: 11 error.
Segmentation fault errors typically occur when the program tries to 
write/read outside the memory allocated for it or when writing memory 
which can only be read. In this case, one of the main problems is that 
for our array of pointers in the setArr method we are trying to change 
the value of arr[index] using the line * arr[index] = i. Problem here 
being that arr is an array of pointer objects that points to memory 
addresses/locations. They themselves don't hold the the values, 
they only hold memory addresses in order to point to other memory 
addresses. So * arr[index] = i is the line trying to change the value 
at the address that arr[index] is pointing to. But arr[index] hasn't 
even been assigned a memory address to point to yet, so we run into an 
error. Like in setArrMain.c example code. They showed the assignment of
the pointers pointing to addresses through: arr[0] = pA, or arr[1] = &b,
and so on.
*/
