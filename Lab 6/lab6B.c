/***************************************
* EECS2031M – Lab 6 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_num: bryan712 *
* Yorku #:  216426744
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 30
#define COLUMNS 50

void exchange2D(char[][50]);
void sort2D (char[][50], int n);
void print2D(char[][50], int n);

int main(int argc, char *argv[])
{
     char inputs[ROWS][COLUMNS];
     int current_row = 0;

     printf("sizeof inputs: %d\n", sizeof(inputs));

     printf("Enter string: ");
     fgets(inputs[current_row], 50, stdin);

     while(strcmp("xxx\n",inputs[current_row]) != 0)        
     {    
	    current_row++;
        printf("Enter string: ");
	    fgets(inputs[current_row], 50, stdin);
     }
     printf("\n");
     print2D(inputs, current_row);
   
     printf("\n");
     exchange2D(inputs);
     printf("== after swapping ==\n");
     print2D(inputs, current_row);

     sort2D(inputs, current_row);
     printf("\n== after sorting ==\n");
     print2D(inputs, current_row);

     return 0;
}

void exchange2D(char inputs[][50]){
	char temp[ROWS];

	strcpy(temp, inputs[0]);
	strcpy(inputs[0], inputs[1]);
	strcpy(inputs[1], temp);

	strcpy(temp, inputs[2]);
	strcpy(inputs[2], inputs[3]);
	strcpy(inputs[3], temp);
}

void sort2D(char inputs[][50], int n){
	int i = 0;
	int j = 0;
	int smallest = 0;

	for(i = 0; i <= n-2; i++){
		smallest = i;
		for(j = i + 1; j <= n-1; j++){
			if(strcmp(inputs[j], inputs[smallest]) < 0){
				smallest = j;
			}
		}
		// char temp[50];
		// strcpy(temp, inputs[smallest]);
		// strcpy(inputs[smallest], inputs[i]);
		// strcpy(inputs[i], temp);
		char temp;
		int p = 0;
		for(p = 0; p < 50; p++){
			temp = inputs[smallest][p];
			inputs[smallest][p] = inputs[i][p];
			inputs[i][p] = temp;
		}
	}
}

void print2D(char inputs[][50], int n){
	int i = 0;
	for(i = 0; i < n; i++){
		printf("[%d]: %s", i, inputs[i]);
	}
}