#include <stdio.h>
#define NO_OF_ELS 25
int main()
{
  int a[NO_OF_ELS] = { 10, 13, 15, 11, 6 } ;
  int *p;
   p = a;

   p++;

   printf("the contents of the array name is %p\n", p);




	
  
  return 0; // to indicate the end of the program	
}

