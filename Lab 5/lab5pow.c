/***************************************
* EECS2031M – Lab5 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>
#include <math.h>

double my_pow(double, double);

int main(int argc, char *argv[])
{
   int base, exponent;  
   printf("Enter base and power: ");
   scanf("%d %d", &base, &exponent);

   while (base != -100){
     double res = pow(base, exponent);
     double res2 = my_pow(base, exponent);
     printf("pow:    %.4f\n", res);
     printf("my_pow: %.4f\n", res2);


     printf("Enter base and power: ");
     scanf("%d %d", &base, &exponent);
    }
	
    return 0;
}

// this function should be RECURSIVE
// should not use any loop here
double my_pow(double base, double power)
{
     if(power == 0){
          return 1;
     }
     else if (power > 0){
          return base * my_pow(base, power-1);
     }
     else{
          return 1/base * my_pow(base, power+1);
     }
}
