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
  int newlineCount = 0;
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    if(c == '\n')
    {
      newlineCount++;
    }
    count++; //include spaces and '\n'
    c = getchar(); /* read next */
  }

  int trueCount = count - newlineCount;
  printf("# of chars: %d\n",trueCount);

}
