/***************************************
* EECS2031M – Lab2 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>

int main(){
	int c = getchar();
	while (c != EOF){
		if(c >= 'a' && c <= 'z'){
			c = (c + ('A' - 'a'));
		}
		putchar(c);
		c = getchar();
	}
	return 0;
}