/***************************************
* EECS2031M – Lab5 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 30 // At most 30 characters

void printReverse (char *);
int isPalindrome (char *);

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr, "quit\n") != 0)
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      // print backward
      printReverse(arr);
   
      if (isPalindrome (arr)){ 
         printf ("\nIs a palindrome.\n\n");
      }else{ 
         printf ("\nNot a palindrome.\n\n");
      }
      fgets(arr,SIZE,stdin);
    }
    return 0;
}


int isPalindrome (char * str)
{
   int i =0;
   for(i = 0; i < (strlen(str)/2); i++){
      if(*(str+i) != *(str + strlen(str)-1-i)){
         return 0;
      }
   }
   return 1;
}

// assume the \n was already removed manually
void printReverse(char * str)
{
   int i = strlen(str)-1;
   while(i >= 0){
      printf("%c", *(str+i));
      i--;
   }
}
