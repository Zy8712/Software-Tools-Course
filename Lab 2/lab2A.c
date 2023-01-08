/***************************************
* EECS2031M – Lab2 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>

int isDigit(char c);

int main(){
	int intVal = 0, sum;
	char charVal;
	while(intVal != -10000){
		printf("Enter an integer and a character separated by blank:");
		scanf("%d %c", &intVal, &charVal);
		if(isDigit(charVal) == 1){
			sum = intVal + (charVal - '0');
			printf("Character '%c' represents a digit. Sum of %d and %c is %d\n", charVal, intVal, charVal, sum);
		}else{
			printf("Character '%c' does not represent a digit\n", charVal);
		}
		printf("\n");
	}
	return 0;
}

int isDigit(char c){
        if(c >= '0' && c <= '9'){
                return 1;
        }
        return 0;
}
