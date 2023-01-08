/***************************************
* EECS2031M – Lab3 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>

#define SIZE 10
 
int my_atoi(char[]); 
int isQuit (char[]);
int power(int, int);
int length(char[]);

int main(){
  int a,b;
  char arr [SIZE];

  printf("Enter a postive number or 'quit': " );
  scanf("%s", arr);
  while(!isQuit(arr))
  {
    printf("%s\n", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t\t%d\t\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t\t%d\t\t%d\n", b,b,b, b*2, b*b);

    printf("Enter a postive number or 'quit': " );
    scanf("%s", arr);
  }

  return 0;

}

/* convert an array of digit characters into a decimal int */

/* textbook did scan from left to right.
 Here you should scan from right to left. This is a little complicated 
 but more straightforward (IMHO) */

int my_atoi (char c[])
{
  int i, counter = 0, value = 0;
  
  for(i = length(c); i > 0; i--){
    if(c[i-1] >= '0' || c[i-1] <= '9'){
      value += ((c[i-1] - '0') * power(10, counter));
    }
    counter++;
  }
  return value;
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

int isQuit(char arr[]){
  if((arr[0] == 'q' && arr[1] == 'u' && arr[2] == 'i' && arr[3] == 't')){
    return 1;
  }
  else{
    return 0;
  }
}

int power(int base, int n){
  int value = base;
  if(n == 0){
    return 1;
  }
  else if(n == 1){
    return base;
  }
  else{
    int i;
    for(i = 2; i < n+1; i++){
      value = value * 10;
    }
    return value;
  }
}