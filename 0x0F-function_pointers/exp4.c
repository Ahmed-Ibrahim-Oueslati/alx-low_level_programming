#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#if  0
void BubbleSort(int *A, int n) {
int i,j, temp;
for(i=0; i<n; i++)
for(j=0; j<n-1; j++) {
if(A[j] < A[j+1]) { //compare A[j] with A[j+1] and SWAP if needed
temp = A[j];
A[j] = A[j+1];
A[j+1] = temp;
} 
}
}
int main() {
int i, A[] = {3,2,1,5,6,4};
BubbleSort (A,6);
for(i=0;i<6;i++) printf("%d",A[i]);
putchar('\n');
}
#endif 
// second exp 
int compare (int a, int b)
{
if(a > b) return -1;
else return 1;
}
int absolute_compare (int a, int b)
{
if(abs(a) > abs(b)) return 1;
return -1;
}
void BubbleSort (int *A, int n,int (*compare) (int, int)) {
int i,j,temp;
for(i=0; i<n; i++)
for(j=0; j<n-1; j++) {
if(compare (A[j],A[j+1]) > 0) { // compare A[j] with A[j+1] and SWAP if needed
temp =A[j];
A[j] = A[j+1];
A[j+1] = temp;
}
}
}
int main() {
int i, A[] = {3,2,1,-5,6,-4};
BubbleSort (A, 6, absolute_compare);
for(i=0;i<6;i++) printf("%d ",A[i]);
}