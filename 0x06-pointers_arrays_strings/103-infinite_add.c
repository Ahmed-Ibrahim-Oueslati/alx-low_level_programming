#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Entry point of the program.
 *
 * Description: adds two numbers.
 *@n1: num 1
 *@n2:num 2
 * Return: the sum.
 */
 int _atoi(char *s)
{
int j = 0;
int p = 1;
int k;
unsigned int L = 0;
int ini = 1;
int bnb = 1;
while (s[j] != '\0')
{
j++;
}
j--;

for (k = 0; k <= j; k++)
{
if (s[k] >= 48 && s[k] <= 57)
{
bnb++;
L = (L * 10) + (s[k] - '0');
}
if (s[k] == 45)
{
p *= -1;
}
if (!(s[k] >= 48 && s[k] <= 57) && (bnb > ini))
{
break;
}
}
L *= p;
return (L);
}
char *infinite_add(char *n1, char *n2, char *n3)
{
   int n4 ;
   int n5 ;
   int n6 ;
   


n4 =  _atoi(n1);
n5 = _atoi(n2);
n6 = n4 + n5;

 sprintf(n3, "%d", n6);

return (n3);
}
