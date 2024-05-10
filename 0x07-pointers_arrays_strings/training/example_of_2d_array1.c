#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{

   int arr[3][5] = {{1,2,3,4,5}, {10,20,30,40,50}, {5,10,15,20,25}};
   int i, j;
   int sum, Tsum;
    Tsum=0;

   for (i=0; i<3; i++){
      sum=0;
     
      for (j=0; j<5; j++){
         sum+=arr[i][j];
      
      }
    Tsum+=sum;
      printf("Sum of row %d: %d\n", i, sum);
   }
    printf("Sum of rows : %d\n", Tsum);
   return 0;

}
