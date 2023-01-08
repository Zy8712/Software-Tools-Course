#include <stdio.h>

int strlen0(char a[]);
int strlen1(char a[]);
int strlen2(char a[]);
int strlen3(char *a);
int strlen4(char *a);
int strlen5(char *a);
int strlen6(char *a);
int strlen7(char *a);
int strlen8(char a[]);
int strlen9(char *a);

int strlenRec(char a[]);
int strlenRec2(char *a);

  
int main()
{
  char arr[] = "Hello the world!";
  printf("%s\n", arr);
  int i0 = strlen0(arr);  
  int i1 = strlen1(arr);  
  int i2=  strlen2(arr);
  int i3 = strlen3(arr);
  int i4=  strlen4(arr);
  int i5=  strlen5(arr);
  int i6=  strlen6(arr);
  int i7=  strlen7(arr);

  int i8 = strlen8(arr);
  int i9 = strlen9(arr);
  
  int ir1=  strlenRec(arr);
  int ir2=  strlenRec2(arr);

  int len = sizeof arr /sizeof(char) - 1;

  printf( "%d %d %d %d %d %d %d %d %d %d %d %d\n", i0, i1, i2 ,i3,i4,i5,i6,i7, i8, i9, ir1,ir2);
  printf( "size of arr: %d   sizeof(arr)/sizeof(char)-1: %d\n\n",sizeof arr, len);

  // pass pointer to array
  char * ptr = arr; // = &arr[0];
  printf("%s\n", ptr);
  i0 = strlen0(ptr);
  i1 = strlen1(ptr);
  i2=  strlen2(ptr);
  i3 = strlen3(ptr);
  i4=  strlen4(ptr);
  i5=  strlen5(ptr);
  i6=  strlen6(ptr);
  i7=  strlen7(arr);

  i8 = strlen8(ptr);
  i9 = strlen9(ptr);

  ir1=  strlenRec(ptr);
  ir2=  strlenRec2(ptr);
  
  len = sizeof ptr /sizeof(char) - 1;

  printf( "%d %d %d %d %d %d %d %d %d %d %d %d\n", i0, i1, i2 ,i3,i4,i5,i6,i7, i8, i9, ir1,ir2);
  printf( "size of ptr: %d   sizeof(ptr)/sizeof(char)-1: %d\n\n",sizeof ptr, len);

  // pass sub-array
  ptr +=3;   // ptr points to arr[3] now
  printf("%s\n", ptr);
  i0 = strlen0(ptr);
  i1 = strlen1(ptr);
  i2=  strlen2(ptr);
  i3 = strlen3(ptr);
  i4=  strlen4(ptr);
  i5=  strlen5(ptr);
  i6=  strlen6(ptr);
  i7=  strlen7(ptr);

  i8 = strlen8(ptr);
  i9 = strlen9(ptr);

  ir1=  strlenRec(ptr);
  ir2=  strlenRec2(ptr);
  len = sizeof(ptr)/sizeof(char) - 1;

  printf( "%d %d %d %d %d %d %d %d %d %d %d\n", i0, i1, i2 ,i3,i4,i5,i6,i7, i8, i9, ir1,ir2);
  printf( "size of ptr: %d   sizeof(ptr)/sizeof(char)-1: %d\n",sizeof ptr, len);

  return 0;
} // end of main


/*  array index [] notations */
int strlen0(char a[]){
 int i=0;
 while (a[i] != '\0')
 {
    i++;
 } 
 return i;
}

/*  array index [] notations, using ++ */
int strlen1(char a[]){
 int i=0;
 while (a[i++] != '\0')
	 ;
 
 return i-1;
}

/* another [] version */
int strlen2(char a[]){
  int i;
  for(i=0; a[i]!= '\0'; i++)
    ;
  return i;
}


/* 5 pointer notations  */

// pointer version of strlen0
int strlen3(char *a){
 int i=0;
 while (*(a+i) != '\0')
 {
    i++;
 } 
 return i;
}

// pointer version of strlen2
int strlen4(char *a){
  int i;
  for(i=0; *(a+i)!= '\0'; i++)
    ;
  return i;
 
}

// move a
int strlen5(char *a){
 int i=0;
 while (*a != '\0')
 {
    i++; 
	a++;
 } 

 return i;
}

// use two pointers distance, the 'cool' version that I like
int strlen6(char *a){
    char *p = a;
    while ( *p != '\0')
      p++;
    return p - a; // how far are they apart?
}


// another way  use two pointers distance, move pointer a
int strlen7(char *a){
    char *p = a;
    while ( *a != '\0')
      a++;
    return a - p; // how far are they apart?
}


/* array argument, pointer notation in body */
int strlen8(char a[]){  //strlen1+strlen3

 int i=0;
 while (*(a+i) != '\0')
 {
    i++;
 }
 return i;
}



/* pointer argument, [] notation in body */
int strlen9(char *a){  //strlen3+strlen1

 int i=0;
 while ( a[i] != '\0')
 {
    i++;
 }
 return i;
}

/* 2 recursive solutions */
int strlenRec(char a[]){ // array notation

 if (a[0] == '\0')
   return 0;
 else
   return 1 + strlenRec(&a[1]);
}

int strlenRec2(char *a){  // pointer notation

 if (*a == '\0')
   return 0;
 else
   return 1 + strlenRec2(a+1);
}
