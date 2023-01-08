#include<stdio.h>
#include<string.h>

void processString(char *);
void processString2(char []);

void processArray(int * c);
void processArray2(int c[]);

int main(){

  char str[] = "Hello";
  printf("%p %d/%d=%d  in main() \n", str, sizeof str, sizeof (char), sizeof str / sizeof(char));
  processString(str);
  printf("\n");
  processString2(str);
  printf("-------------\n");

  int arr[] ={2,23,3,5,6,7}; 
  printf("%p %d/%d=%d  in main() \n", arr, sizeof arr, sizeof (int), sizeof arr / sizeof(int));

  processArray(arr);
  processArray2(arr);

  return 0;
}


void processString(char * c){
    printf("%p %d/%d=%d\n", c, sizeof c, sizeof (int), sizeof(c)/sizeof(int));
    printf("strlen: %d\n", strlen(c));
}

void processString2(char c[]){
    printf("%p %d/%d=%d\n", c, sizeof c, sizeof (int), sizeof(c)/sizeof(int));
    printf("strlen: %d\n", strlen(c));

}

void processArray(int * c){
    printf("%p %d/%d=%d\n", c, sizeof c, sizeof (int), sizeof(c)/sizeof(int));
}

void processArray2(int c []){
    printf("%p %d/%d=%d\n", c, sizeof c, sizeof (int), sizeof(c)/sizeof(int));
}



