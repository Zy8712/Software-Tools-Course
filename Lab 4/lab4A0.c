/***************************************
* EECS2031M – Lab4 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>

#define SIZE 10

// declare global variables, which are defined in other file
extern int x;
extern int y; 

// declear function, which are defined in other file
void modify();    // or extern void modify()

// declare function, which is defined later in this file
void aFun(void); 

int main()
{
    printf("x:%d  y:%d\n", x,y);

    y=10;
    modify();
    printf("x:%d  y:%d\n", x,y);

    int a;
    if (y != 10){
      a = y;
    }
    printf("a: %d\n", a);
 

    int k;
    for(k=0; k<SIZE; k++)
       aFun();
  

    return 0;
}

void aFun(void){
    static int counter;
    int b;
    printf("aFun() called, counter is %d, b is %d\n", counter, b);
    
    counter +=10;

 }

