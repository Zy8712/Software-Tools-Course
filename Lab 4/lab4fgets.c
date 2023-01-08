/***************************************
* EECS2031M – Lab4 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{

     char input[SIZE2];    
     char name[SIZE];  
     int age; 
     float rate;
     char resu[SIZE2], resu2[SIZE2];
	
     printf("Enter name, age and rate (or \"exit\"): ");
     fgets(input, 40, stdin);
     while (strcmp("exit\n", input) != 0)
     {    
       //output original input using two functions.
       printf("%s", input);  // no \n needed
       fputs(input, stdout); 
      
       sscanf(input, "%s %d %f", name, &age, &rate);
       name[0] += ('A' - 'a');
       age += 10;
       rate *= 2;
 
       printf("%s-%d-%0.3f-[%.0f,%.0f]\n", name, age, rate, floor(rate), ceil(rate));
       sprintf(resu2, "%s", resu);

       /* use fgets to read again */
      printf("Enter name, age and rate (or \"exit\"): ");
      fgets(input, 40, stdin);
     } 
      return 0;
}
