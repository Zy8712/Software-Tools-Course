/***************************************
* EECS2031M – Lab4 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 12

main (){
   char str[SIZE];
   int i;
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
    printf("\n");

   printf("strcpy(str,\"Hi\")\n");
   strcpy(str, "Hi");
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
   printf("%s\nsize:%d  length:%d\n\n", str, sizeof str,strlen(str));

   printf("strcpy(str,\"There\")\n");
   strcpy(str, "There");
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
   printf("%s\nsize:%d  length:%d\n\n", str, sizeof str,strlen(str));

   printf("strcpy(str,\"XY\")\n");
   strcpy(str, "XY");
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
   printf("%s\nsize:%d  length:%d\n\n", str, sizeof str,strlen(str));
   
   printf("strcat(str,\"OK\")\n");
   strcat(str, "OK");
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
   printf("%s\nsize:%d  length:%d\n\n", str, sizeof str,strlen(str));

   printf("strcat(str,\"++\")\n");
   strcat(str, "++");
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
   printf("%s\nsize:%d  length:%d\n\n", str, sizeof str,strlen(str));
   return 0;
}
