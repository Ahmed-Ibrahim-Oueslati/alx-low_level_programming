#include <stdio.h>
int role = 8;
int main (void)
{
static  int data2 = 9;
int n = 98;
int *p = &n;
printf (" P1 = %p\n", p);
*p++;
printf (" n = %d\n", n);
printf (" P2 = %p\n", p);
    return 0;
}