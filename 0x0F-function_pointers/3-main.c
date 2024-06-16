#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *@ac: nb of arguments
 *@av: array of pts to the args
 * Return: Always 0 (success).
 */
int main(int ac, char **av)
{
int num1, num2;
char *operator;
int (*res)(int, int);
if (ac != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(av[1]);
num2 = atoi(av[3]);
operator = av[2];
res = get_op_func(operator);
if (!res)
{
printf("Error\n");
exit(99);
}

printf("%d\n", res(num1, num2));
return (0);
}
