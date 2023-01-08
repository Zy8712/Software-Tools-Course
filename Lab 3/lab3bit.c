#include <stdio.h>

#define SIZE 32

void printBinary(int n ){
   //printf("binary: ");
   int cou = SIZE-1;
   int k[SIZE]={0};

   while (n) {
      if (n & 1)
         k[cou]=1; //printf("1");
      else
         k[cou]=0; //printf("0");

      n >>= 1; 
      cou--;
   }
   int i=0;
   for(; i< SIZE;i++)
   {
      printf("%d", k[i]);
      if ((i+1)%8==0)
      {
         printf(" ");
      }
   }
}

int main() {

  int abc;
  scanf("%d",&abc);

  while(abc != -1000)
  {		
     printBinary(abc); printf("  %d\n", abc);
     printBinary(abc << 3); printf("  abc << 3\n");
     printBinary(abc << 6); printf("  abc << 6\n\n");

     printBinary(abc); printf("  %d\n", abc);
     printBinary(~abc); printf("  ~abc\n\n");


     printBinary(abc); printf("  %d\n", abc);
     printBinary(1<<4);printf("  1<<4\n|\n"); printBinary( abc | (1<<4)); printf("  turn bit-4 on\n\n\n");
   
     printBinary(abc); printf("  %d\n", abc);
     printBinary(~(1<<4));printf("  ~(1<<4)\n&\n");printBinary( abc & ~(1<<4)); printf("  turn bit-4 off\n\n\n");

     printBinary(abc); printf("  %d\n", abc);
     printBinary(1<<4);printf("  1<<4\n&\n");printBinary( abc & (1<<4)); printf("  keep bit-4, turn off others\n\n\n");


     printBinary(abc); printf("  %d\n", abc);
     printBinary(077);  printf("  077\n&\n");printBinary( abc & 077); printf("  keep lower 6 bits, others off\n\n\n");

     printBinary(abc); printf("  %d\n", abc);
     printBinary(~077); printf("  ~077\n&\n");printBinary( abc & ~077); printf("  turn lower 6 bits off, keep others\n\n\n");

     scanf("%d",&abc); // read again
  }

}
