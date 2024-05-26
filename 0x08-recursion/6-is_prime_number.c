#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "main.h"

/**
* check_prime - Recursively checks if a number is divisible by any number
* @n: The number to check for primality
* @i: The current divisor being checked
*
* Return: 1 if prime, 0 otherwise
*/
int check_prime(int n, int i)

{
if (i * i > n)
return (1);  /* No divisors found, n is prime */
if (n % i == 0 || n % (i + 2) == 0)
return (0);  /* Found a divisor, n is not prime */
return (check_prime(n, i + 6));  /* Check next potential divisor */
}

/**
* is_prime_number - Entry point of the program.
*
* Description: Checks if the int is a prime number
* @n: Integer to check
*
* Return: 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)

{
if (n <= 1)
return (0);
if (n <= 3)
return (1);
if (n % 2 == 0 || n % 3 == 0)
return (0);

return (check_prime(n, 5));
}
