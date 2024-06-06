#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* main - Entry point of the program.
*
* Description: Prints a string to the console.
*@ac: nb of arguemnts
*@av: the arguments
* Return: Always 0 (success).
*/
int main(int ac, char **av)
{
int num1, num2, multi, i;
if (ac != 3)
{
printf("Error1\n");
exit(98);
}
i = 0;
while (av[1][i] != '\0')
{
if (av[1][i] < '0' || av[1][i] > '9')
{
printf("Error2\n");
exit(98);
}
i++;
}
i = 0;
while (av[2][i] != '\0')
{
if (av[2][i] < '0' || av[2][i] > '9')
{
printf("Error3\n");
exit(98);
}
i++;
}
num1 = atoi(av[1]);
num2 = atoi(av[2]);
multi = num1 *num2;
printf("%d\n", multi);
return (((0)));
}
