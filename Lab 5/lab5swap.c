/***************************************
* EECS2031M – Lab5 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>

void swapIncre(int *, int *, int *);

int main( ) {
  int a, b,c; 

  /* Input three integers*/
  scanf("%d %d %d", &a, &b,&c);
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);     
     swapIncre(&a,&b,&c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);  

     /* read again */
     scanf("%d %d %d", &a, &b,&c);
   }

}

void swapIncre(int *x, int *y, int *z){
   int temp = *x;
   *x = *z;
   *z = temp;

   *x += 100;
   *y *= 2;
}

