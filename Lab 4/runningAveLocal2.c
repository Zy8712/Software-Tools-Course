/***************************************
* EECS2031M – Lab4 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/

#include <stdio.h>

void r_avg(int);

int main(int argc, char *argv[])
{
	
   int input;  
   printf("Enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        r_avg(input);

        printf("\nEnter number (-1 to quit): ");
        scanf("%d", &input);
    }
	
    return 0;
}

void r_avg(int input)
{
    static int sum;
    static int counter;
    sum += input;
    counter++;
    double resu = (double)sum/counter;
    printf("running average is %d / %d = %.3f\n", sum, counter, resu);     
}
