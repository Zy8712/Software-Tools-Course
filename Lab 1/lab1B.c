/***************************************
* EECS2031M – Lab1 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>

main()
{
  int Month, Day, Year;
  printf("Enter month, day, and year separated by spaces: ");
  scanf ("%d %d %d", &Month, &Day, &Year);

  printf("The input '%d %d %d' is reformatted as ", Month, Day, Year);
  printf("%d/%d/%d", Year, Month, Day);
  printf(" and %d-%d-%d\n", Year, Month, Day);

}
