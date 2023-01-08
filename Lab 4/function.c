/***************************************
* EECS2031M – Lab4 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/

#include <stdio.h>

// define global variables and a function
int input;

void r_avg(void)
{
    static int sum;
    static int counter;
    double resu;
    sum += input;
    counter++;
    resu = (double)sum/counter ;
    printf("running average is %d / %d = %.3f\n", sum , counter, resu);
}

