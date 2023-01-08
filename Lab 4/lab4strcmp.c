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

int my_strcmp(char [], char []);
int term(char[], char[]);

int main(){
   char a[SIZE];
   char b[SIZE];
   
   scanf("%s", a); 
   scanf("%s", b);
    
   while (!term(a, b)){
      int resu = strcmp(a,b); 
      if (resu < 0) printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if (resu > 0) printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else printf("\"%s\" and \"%s\" are same\n", a, b);
      
      int resu2 = my_strcmp(a,b);
      if (resu2 < 0) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if (resu2 > 0) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" are same\n\n", a,b);

      scanf("%s", a); 
      scanf("%s", b);
   }
}


int my_strcmp(char a[], char b[]){
   int i;
   for(i = 0; i < SIZE; i++){
      if(a[i] < b[i]){
         return -1;
      }
      else if(a[i] > b[i]){
         return 1;
      }
      else if(a[i] == '\0' && b[i] == '\0'){
         return 0;
      }
   }
   return 0;

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