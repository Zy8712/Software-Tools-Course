/***************************************
* EECS2031M – Lab5 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
/* Passing an array to a function. */

#include <stdio.h>

#define MAX 20

int largest(int * x);
void display(int *arr);

 main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }
     *(array+count) = -1;


      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array);

     
     
     printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 
 /* display a int array */

 void display(int *arr)
 {
     int i = 0;
     while(*(arr + i) >= 0){
         printf("%d ", *(arr + i));
         i++;
     }
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr)
 {
     int i = 0, num = 0;
     while(*(arr + i)  >= 0){
         if(*(arr + i) > num){
             num = *(arr + i);
         }
         i++;
     }
     return num;
 }

