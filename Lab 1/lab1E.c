/***************************************
* EECS2031M – Lab1 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>

float sum(float, float);

int main()
{
  float x; float y;
  int totalInteractions; int currentInteractions = 0;
  printf("Enter the number of interactions: ");
  scanf("%d", &totalInteractions);
  while(currentInteractions < totalInteractions){
	printf("Enter two float numbers separated by ##: ");
	scanf("%f##%f", &x, &y);
	float su= sum(x,y);
	printf( "%f and %f = %f\n", x,y, su);
	currentInteractions++;
   }
   return 0;
}

/* function definition */
float sum (float i, float j){
  return i+j;             
}
