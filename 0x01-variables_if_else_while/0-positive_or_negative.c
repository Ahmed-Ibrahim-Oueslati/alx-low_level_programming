#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program.
 *
 * Description: checks if the random nb is positive or negative.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative ",n);
}
else
{
printf("%d is positive",n);
}             
return (0);   
}
