#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 * Return: the factorial of n, -1 if n is < 0, 1 if n = 0
 */
int factorial(int n)
{
	int fac;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	fac = n * factorial(n - 1);
	return (fac);
}
