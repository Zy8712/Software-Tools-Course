/***************************************
* EECS2031M – Lab3 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>
#include <string.h>

int isLeap(int year);

int main(){
	int inputYear = 0;
	printf("Enter a year: ");
	scanf("%d", &inputYear);

	while(inputYear >= 0){
		if(isLeap(inputYear) == 1){
			printf("Year %d is a leap year\n\n", inputYear);
		}
		else{
			printf("Year %d is not a leap year\n\n", inputYear);
		}
		printf("Enter a year: ");
		scanf("%d", &inputYear);
	}
	return 0;
}

int isLeap(int year){
	if(year % 400 == 0){
		return 1;
	}
	else if ((year % 4 == 0) && (year % 100 != 0)){
		return 1;
	}
	return 0;
}