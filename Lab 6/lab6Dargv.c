/***************************************
* EECS2031M – Lab 6 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_num: bryan712 *
* Yorku #:  216426744
****************************************/
#include <stdio.h>
#include <string.h>

int getSum(char *[], int n);
int getDiff(char **, int n);

int main(int argc, char *argv[]){
	int i = 0;
	printf("There are %d arguments (excluding \"%s\")\n", argc - 1, *argv);
	if(strcmp(argv[1], "sum") == 0){
        for(i = 2; i < argc - 1; i++){
		    printf("%s + ", *(argv + i)); 
	    }
    	printf("%s\n", *(argv + argc -1));
        printf("= %d\n", getSum(argv, argc));
    }

    else if(strcmp(argv[1], "diff") == 0){
        for(i = 2; i < argc - 1; i++){
		    printf("%s - ", *(argv + i)); 
	    }
    	printf("%s\n", *(argv + argc -1));
        printf("= %d\n", getDiff(argv, argc));
    }
}

int getSum(char *input[], int n){
	int i = 0;
	int sum = 0;
	for(i = 1; i < n; i++){
		sum += atoi(*(input + i));
	}
	return sum;
}


int getDiff(char *input[], int n){
	int i = 0;
	int diff = atoi(*(input + 2));
	for(i = 3; i < n; i++){
		diff -= atoi(*(input + i));
	}
	return diff;
}







