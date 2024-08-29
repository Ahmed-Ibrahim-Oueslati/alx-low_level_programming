#include<stdio.h>
/**
 * add - a function that add two variables
 * @a : input value
 * @b : input value
 * Return: sum of two variables
*/
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - a function that substract two variables
 * @a : input value
 * @b : input value
 * Return: substract of two variables
*/
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - a function that multiply two variables
 * @a : input value
 * @b : input value
 * Return: multiplication of two variables
*/
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - a function that divise two variables
 * @a : input value
 * @b : input value
 * Return: division of two variables
*/
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by ZERO\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - a function that gives mod
 * of two variables
 * @a : input value
 * @b : input value
 * Return: mod of two variables
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by ZERO\n");
		return (0);
	}
	return (a % b);
}
