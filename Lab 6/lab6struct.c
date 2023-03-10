/***************************************
* EECS2031M – Lab 6 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_num: bryan712 *
* Yorku #:  216426744
****************************************/
#include <stdio.h>
#include <stdlib.h>

struct ints
{ 
   int data1;
   int data2;
};

struct intPtr { 
   int data;
   int * ptr;
};


struct intArr { 
   int data;
   int arr[3];
};

int getSum(struct ints);
void processStruct (struct ints *);

main()
{
  printf("----------- simple struct --------------\n");
  struct ints a = {32,4};
  struct ints b;
  // print the two members of a;
  printf("a: %d %d\n", a.data1, a.data2);
  //print the two members of b;
  printf("b: %d %d\n", b.data1, b.data2);

  a.data1 = 100;
  b = a;
  // print the two members of a; 
  printf("\na: %d %d\n",  a.data1, a.data2);
  //print the two members of b; 
  printf("b: %d %d\n", b.data1, b.data2);
  
  b.data1 = 700; // change b.data1
  //use scanf to change b.data2
  printf("\nEnter value for b.data2: ");
  scanf("%d", &b.data2);

  // print the two members of a again; 
   printf("a: %d %d\n", a.data1, a.data2);
  // print the two members of b again;
   printf("b: %d %d\n", b.data1, b.data2);

  printf("------- struct with pointer member -----------------\n");
  struct intPtr xx; 
  xx.data = 5;
  int c = 100;   xx.ptr = &c;
  
  struct intPtr yy = xx;
  // print xx's data, pointer value, and pointee value  
  printf("xx: %d %p %d\n", xx.data, xx.ptr, *xx.ptr);

  //print yy's data, pointer value, and pointee value    
  printf("yy: %d %p %d\n", yy.data, yy.ptr, *yy.ptr);

  // set the pointee of yy's pointer to be 10000;  
  *yy.ptr = 10000;
  printf("\nc: %d\n", c);  
  //print xx's data, pointer value, and pointee value   
  printf("xx: %d %p %d\n", xx.data, xx.ptr, *xx.ptr);
  //print yy's data, pointer value, and pointee value  
  printf("yy: %d %p %d\n", yy.data, yy.ptr, *yy.ptr);

  printf("------- struct with array member ------------------\n");

  struct intArr tt = {2, {100,200}};
  
  // set tt's arr member's 2nd element to be 400;  
  tt.arr[1] = 400;
  //print tt's data element, as well as array elements  
  printf("%d [%d %d]\n", tt.data, tt.arr[0], tt.arr[1]);

 
}   

 
