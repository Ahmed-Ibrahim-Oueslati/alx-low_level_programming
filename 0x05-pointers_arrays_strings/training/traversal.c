#include <stdio.h>
int main(){
   int LA[] = {1,3,5,7,8};
   int i = 0,  n = 5 ;
   printf("The original array elements are :\n");
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
}