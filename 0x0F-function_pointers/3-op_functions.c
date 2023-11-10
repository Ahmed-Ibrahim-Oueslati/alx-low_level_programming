#include "3-calc.h"

/**
 * op_add - adds two ints
 * Return: sum of a and b
 * @a: first int
 * @b: second int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts
 * Return: difference of a and b
 * @a: first int
 * @b: second int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * Return: product of a and b
 * @a: first int
 * @b: second int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * Return: result of division
 * @a: first int
 * @b: second int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of two ints
 * Return: remainder of divion of a by b
 * @a: first int
 * @b: second int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
