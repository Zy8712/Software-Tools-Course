/***************************************
* EECS2031M – Lab4 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>


void swap(int, int);


int main( ) {
  int mainA, mainB;
  mainA = 1;
  mainB = 20000;
  swap(mainA, mainB);
  return 0;
}


void swap(int x, int y)
{
   int temp = x;
   x = y;
   y = temp;
}
