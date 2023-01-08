/***************************************
* EECS2031M – Lab4 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/

#include <stdio.h>

void r_avg(void);
extern int input;

int main(int argc, char *argv[])
{
    printf("Enter number (-1 to quit): ");
    scanf("%d", &input);
	
    while(input != -1){	
      
      r_avg();

      // read again
      printf("\nEnter number (-1 to quit): ");
      scanf("%d", &input);	
     }
	 
     return 0;
}

