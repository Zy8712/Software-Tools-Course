#include <stdio.h>
#include <string.h>

#define SIZE 10

int main () {


  /****************/
  printf("3>2 => %d    3<2 => %d\n", 3 > 2, 3 < 2);
  printf("!0 => %d    !3 => %d   !-23 => %d\n", !0, !3, !-23);
  printf("3&&-5 => %d   -3&&0 => %d  3||-5 => %d    -3||0 => %d\n\n", 3&&-5, -3&&0, 3||-5, -3||0);
 
  int x=100;
  if(x==14){
     printf("In 'if(x==14)'.  x value: %d\n", x);
  }

  if(x=4){ 
     printf("In 'if(x=4)'.  x value: %d\n", x);
  }

  if(x==-2){
     printf("In 'if(x==-2)'. x value: %d\n", x);
  }

  if(x=-2){
     printf("In 'if(x=-2)'. x value: %d\n", x);
  }

  if(x=0) {
     printf("In 'if(x=0)'.  x value: %d\n", x);
  }
  printf("x value after: %d\n\n", x);
  /***************/

  int a=0;
  while (a < 100){
    printf("hello %d\n", a);
    if (a=8)
      break;
    a++;
  }

  return 0;
}

