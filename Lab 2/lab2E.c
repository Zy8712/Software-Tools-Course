/***************************************
* EECS2031M – Lab2 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>

#define MAX_SIZE 20

int length(char word[]);
int indexOf(char word[], char c);
int occurrence(char word[], char c);
int isQuit (char arr[]);

main() {

   char word[MAX_SIZE];
   char c;

   char helloArr[]  = "hello";
   printf("\"%s\" contains %d input characters, but the size of it is %d (bytes)\n", helloArr, length(helloArr), sizeof(helloArr) );
   printf("\n");

   /********** Fill in your code here. **********/
   printf("Enter a word and a character separated by blank: ");
   scanf("%s %c", word, &c);

   while (isQuit(word) == 0)   
   {  
      printf("Input word is %c%s%c. Contains %d characters.\n", '"', word, '"',  length(word));
		printf("'%c' appears %d times in the word\n",  c, occurrence(word, c));
      printf("Index of '%c' in it is %d\n", c, indexOf(word, c));
      printf("\n");
      printf("Enter a word and a character separated by blank: ");
		scanf("%s %c", word, &c);
   }
   return 0;
}

int length(char word[]){
	int length = 0;
   int i = 0;
	for (i = 0; i <= sizeof(word); i++){
		if (word[i] != '\0'){
			length++;
		}else{
			return length;
		}
	}
	return length;
}

int indexOf(char word[], char c){
   int position = 0;
	int i;
	for(i = 0; i <= length(word); i++){
		if(word[i] == c){
			return position;
		}
		position++;
	}
	return -1;
}

int occurrence(char word[], char c){
   int counter = 0;
   int i = 0;
   for(i = 0; i < length(word); i++){
      if(word[i] == c){
         counter++;
      }
   }
   return counter;
}

int isQuit (char arr[]){
 if (arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t'){
    return 1; 
 }
 else{ 
    return 0;
 }
}
