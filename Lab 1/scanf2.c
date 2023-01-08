/***************************************
* EECS2031M – Lab1 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>


int sum (int i, int j)
{
  return i+j;           
}


main()
{
  int a, b;
  printf("Please enter two integers separated by a <><><>: " ); 
  scanf( "%d<><><>%d", &a, &b);     /* assign value to a b  */
 
  printf("Entered %d and %d. Sum is %d\n", a, b, sum(a,b));
}

