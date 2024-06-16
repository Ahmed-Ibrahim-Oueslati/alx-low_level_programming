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
int num1, num2, resl;
char *operator;
int (*res)(int, int);
if (ac != 4)
{
printf("Error1\n");
exit(98);
}
num1 = atoi(av[1]);
num2 = atoi(av[3]);
operator = av[2];
if (*operator != '+' && *operator != '-' &&
*operator != '*' && *operator != '/' && *operator != '%')
{
printf("Error2\n");
exit(99);
}
if ((*operator == '/' || *operator == '%') && (num1 == 0 || num2 == 0))
{
printf("Error3\n");
exit(100);
}


res = get_op_func(operator);
if (res == NULL)
{
printf("Error4\n");
return (99);
}
resl = res(num1, num2);
printf("%d\n", resl);
return (0);
}
