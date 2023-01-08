/***************************************
* EECS2031M – Lab5 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 30

void sortArray(char *);

int main(){
    int result, i, count = 0;
    char c, arr[SIZE];
    fgets(arr, SIZE, stdin);

    while(strcmp(arr, "quit\n") != 0){
        arr[strlen(arr)-1] = '\0';
        sortArray(arr);
        printf("%s\n", arr);
        printf("\n");
        fgets(arr, SIZE, stdin);
    }
    return 0;
}

void sortArray(char *str){
    int i = 0, j = 0;
    int length = strlen(str) -1;
    char *smallest;

    for(i = 0; i <= length; i++){
        smallest = (str + i);
        for(j = i + 1; j <= length; j++){
            if(*(str + j) < *(smallest)){
                smallest = (str + j);
            }
        }
        char temp = *smallest;
        *smallest = *(str + i);
        *(str + i) = temp;
    }
}