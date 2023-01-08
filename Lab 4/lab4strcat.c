/***************************************
* EECS2031M – Lab4 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/

#include<stdio.h>
#include<string.h>

#define SIZE 30

void my_strcat(char [], char []);
int term(char [], char []);

int main(){
   char a[SIZE];
   char b[SIZE];
   char c[SIZE];
   char d[SIZE];

   scanf("%s",a);
   scanf("%s",b);
   while (!term(a, b)){
    
      strcpy(c,a); strcpy(d,b);
      strcat(a,b);
      my_strcat(c,d);
      
      printf("strcat:   %s\n", a); 
      printf("mystrcat: %s\n\n", c);

      scanf("%s",a);
      scanf("%s",b);
   }
}


void my_strcat(char a[], char b[]){
   int lengthA, i = 0;
   for(lengthA = strlen(a); lengthA < SIZE; lengthA++){
      a[lengthA] = b[i];
      i++;
   }
}

int term(char a[], char b[])
{
   int checkA, checkB;
   if(a[0] == 'x' && a[1] == 'x' && a[2] == 'x' && a[3] == '\0'){
      checkA = 1;
   }
   if(b[0] == 'x' && b[1] == 'x' && b[2] == 'x' && b[3] == '\0'){
      checkB = 1;
   }

   if(checkA == 1 && checkB == 1){
      return 1;
   }
   return 0;
   
}