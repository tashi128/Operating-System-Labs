

#include <stdio.h>

#define RowSize 3
#define ColSize 2
 
int main()
{
  int row, col;
  int first[RowSize][ColSize], second[RowSize][ColSize], addition[RowSize][ColSize];
  
  printf("Enter the elements of first matrix\n");
 
  for (row = 0; row < RowSize; row++)
    for (col = 0; col< ColSize; col++)
      {
      printf("enter the value for row %d and col %d: ",row+1,col+1);	
      scanf("%d", &first[row][col]);
      }
     
	 
  printf("Enter the elements of second matrix\n");
 
  for (row = 0; row < RowSize; row++)
    for (col = 0; col< ColSize; col++)
      {
      printf("enter the value for row %d and col %d: ",row+1,col+1);	
      scanf("%d", &second[row][col]);
      }
	 
	 
   for (row = 0; row < RowSize; row++)
    for (col = 0; col< ColSize; col++)
      {
       addition[row][col] = first[row][col] + second[row][col];
      }	
	 
	
    
    printf("addition of entered matrices:-\n");
 
    for (row = 0; row < RowSize; row++){
    for (col = 0; col< ColSize; col++)
        printf("%d\t", addition[row][col]);
 
      printf("\n");
    }
	
  
  return 0;
}
