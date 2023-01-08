/***************************************
* EECS2031M – Lab 6 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_num: bryan712 *
* Yorku #:  216426744
****************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 11

void exchangeParr(char *[]);
void printParr(char *[], int );
void sortParr(char **, int );

main(){

  char * inputs[SIZE] = {"giraffes are high 0", "mosquitos are annoying 1",
  "monkeys are smart 2", "kangaroos are ugly 3"};
  char *temp;

  char arr1 [] = "dogs are friendly 4";
  char arr2 [] = "hippos are huge 5";
  char arr3 [] = "cobras are scary 6";
  char arr4 [] = "fox 7";
  char arr5 [] = "elephants are heavy 8";
  char arr6 [] = "hens 9";
  char arr7 [] = "bison 10";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  inputs[8] = arr5;
  inputs[9] = arr6;
  inputs[10] = arr7;


  printf("sizeof char*: %d, sizeof pointer array: %d\n\n", sizeof(char*), sizeof inputs );

  // display the array by calling printParr
  printParr(inputs, SIZE);

  // swap pointee of first and second element pointers
  temp = inputs[0];
  inputs[0] = inputs[1];
  inputs[1] = temp;  

  // call exchangeParr() to swap some other 'rows';
  exchangeParr(inputs);  

  printf("\n\n== after swapping ==");

  // display the swapped array by calling printParr()
  printParr(inputs, SIZE);

  printf("\n\n");

  // call sortParr()
  sortParr(inputs, SIZE);

  printf("\n== after sorting ==");   

  // display the sorted array by calling printParr()
  printParr(inputs, SIZE);

  printf("\n\n");

}

void exchangeParr(char * records[]){
  char *temp;
  temp = *(records + 2);
  records[2] = records[3];
  records[3] = temp;
}


void sortParr(char * records[], int n){
  int i = 0, j = 0;
  int smallest = 0;
  for(i = 0; i < n; i++){
    smallest = i;
    for(j = i + 1; j < n; j++){
      if(*records[j] < *records[smallest]){
        smallest = j;
      }
    }
    char *temp;
    temp = *(records + smallest);
    records[smallest] = records[i];
    records[i] = temp;
  }
}


void printParr(char * records[], int n){
  int i = 0;
	  for(i = 0; i < n; i++){
		  printf("\n[%d] -*-> %s", i, records[i]);
	  }
}

