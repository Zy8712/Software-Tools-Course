/***************************************
* EECS2031M – Lab1 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h> // define EOF

main(){
  int c;
  int count = 0;
  int aCount = 0;
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    if(c == 'a')
    {
      aCount++;
    }
    count++; //include spaces and '\n'
    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);
  printf("# of char 'a': %d\n", aCount);

}
