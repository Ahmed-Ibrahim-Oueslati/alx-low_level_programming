#include <stdio.h>
#include <stdlib.h>
 /**
  * main - Entry point of the program.
  * Description:  prints the sum of all the multiples of 3 or 5 below 1024
  * Return: 0 success
 */
int main(void)
{
int a;
int y = 0;
for (a = 0; a < 1024; a++)
{
if ((a % 5 == 0) || (a % 3 == 0))
{
y = y + a;
}
}
printf("%d\n", y);
return (0);
}
