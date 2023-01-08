/***************************************
* EECS2031M – Lab4 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
 
#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
    char inputs_table [ROWS][COLUMNS];
    char name[10]; char ageS[10]; char rateS[10];

    int age;
    float rate;

    int counter = 0;
    int i = 0;
    int j = 0;
		
    printf("Enter name age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS); 
       
    while (strcmp("xxx", name) != 0)        
    {  
	    sprintf(inputs_table[i], "%s %s %s", name, ageS, rateS);
	    i++;

	    for(j = 0; j < strlen(name); j++){
            if(name[j] >= 'a' && name[j] <= 'z'){
		        name[j] += ('A' - 'a');
            }
	    }

	    sscanf(ageS, "%d", &age);
	    sscanf(rateS, "%f", &rate);
	    age += 10;
	    rate *= 1.5;

	    sprintf(inputs_table[i], "%s %d %.2f", name, age, rate);
	    i++;

	/* read again using scanf(%s %s %s) */ 
	    printf("Enter name age and wage: ");
	    scanf("%s %s  %s", name, &ageS, &rateS); 
           
    }
    
     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the input_table row by row */      
	for(counter = 0; counter < i; counter++){
	    printf("row[%d] : %s\n", counter, inputs_table[counter]); 	
     }

     return 0;
}

