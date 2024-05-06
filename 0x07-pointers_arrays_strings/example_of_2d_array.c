#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the elements of an array.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
/* an array with 5 rows and 2 columns*/
   int a[5][2][2] = { {{0,0},{1,2}}, {{2,4}, {3,6}},{{4,8}, {9,10}},{{11,12} ,{13,14}},{{15,16} ,{17,18}}};
   int i, j, k;
 
   /* output each array element's value */
   for ( i = 0; i < 5; i++ ) {
      for ( j = 0; j < 2; j++ ) {
        for ( k = 0; k < 2; k++ ) { 
         printf("%4d",a[i][j][k] );
      }
      printf("\n");
     }
     printf("\n");
   }
   return 0;
}
