/***************************************
* EECS2031M – Lab2 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>
#include<string.h>

#define SIZE 10

int char_to_index(char c);

int main () {

  int k[SIZE] = {0};
  int  i =0;
  for (i=0; i< SIZE; i++) {
    printf("k[%d]: %d\n", i, k[i]);
  }

  char msg[]="Hello world";
  printf("\nmsg: %s\n", msg);
  printf("memory size of msg: %d (bytes)\n", sizeof(msg));
  printf("strlen of msg: %d\n", strlen(msg));
  /* your code here */
  for(i = 0; i < sizeof(msg); i++){
    printf("msg[%d]: %d %c\n", i, msg[i], msg[i]);
  }

  char msg2[2*SIZE] = "Hello world";
  printf("\nmsg2: %s\n", msg); 
  printf("memory size of msg2: %d (bytes)\n", sizeof(msg2));
  printf("strlen of msg2 : %d\n", strlen(msg));
  /* your code here */
  for(i = 0; i < sizeof(msg2); i++){
    printf("msg2[%d]: %d %c\n", i, msg2[i], msg2[i]);
  }

  char msg3[2*SIZE];
  printf("\nEnter a string: ");
  scanf("%s", msg3);
  printf("msg3: %s\n", msg3);
  printf("memory size of msg3: %d (bytes)\n", sizeof(msg3));
  printf("strlen of msg3: %d\n", strlen(msg3));
  for(i = 0; i < sizeof(msg3); i++){
    printf("msg3[%d]: %d %c\n", i, msg3[i], msg3[i]);
  }

  return 0;
}
