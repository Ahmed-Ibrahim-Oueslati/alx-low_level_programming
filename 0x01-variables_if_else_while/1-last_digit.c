#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program.
 *
 * Description: finds the last digit of a nb.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int h;
int n;
int g;
srand(time(0));
n = rand() - RAND_MAX / 2;
g = n % 10;
if (g != 0 && g < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, g);
}
else if (g > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, g);
}
else
printf("Last digit of %d is %d and is 0\n", n, g);
return (0);
}
