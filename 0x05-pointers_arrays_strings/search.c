#include <stdio.h>
void main(){
   int LA[] = {1,3,5,7,8};
   int item = 5, n = 5;
   int i = 0, j = 0;
   printf("The original array elements are :\n");
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
   for(i = 0; i<n; i++) {
      if( LA[i] == item ) {
         printf("Found element %d at position %d\n", item, i+1);
      }
   }
}