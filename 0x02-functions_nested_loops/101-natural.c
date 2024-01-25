#include <stdio.h>
#include <stdlib.h>
 /**
 * main - Entry point
 *
 * description : prints the sum of m3 and m5 below 1024
 *
 * Return: Always 0 (success)
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
