#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * op_add - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *@a: first int
 *@b: second int
 * Return: Always 0 (success).
 */
int op_add(int a, int b)
{
	return (a + b);
}




/**
 * op_sub - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *@a: first int
 *@b: second int
 * Return: Always 0 (success).
 */
int op_sub(int a, int b)
{
	return (a - b);
}





/**
 * op_mul - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *@a: first int
 *@b: second int
 * Return: Always 0 (success).
 */
int op_mul(int a, int b)
{
	return (a * b);
}




/**
 * op_div - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *@a: first int
 *@b: second int
 * Return: Always 0 (success).
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}



/**
 * op_mod - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *@a: first int
 *@b: second int
 * Return: Always 0 (success).
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}


