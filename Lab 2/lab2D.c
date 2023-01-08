/***************************************
* EECS2031M – Lab2 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>

#define SIZE 10

int main(){
	int counter[SIZE] = {0};
	int i = 0;
	int c = getchar();
	while(c != EOF){
		if(c >= '0' && c <= '9'){
			counter[c -'0']++;
		}
		c = getchar();
	}
	for(i = 0; i < SIZE; i++){
		printf("%d: %d\n", i, counter[i]);
	}
	return 0;
}