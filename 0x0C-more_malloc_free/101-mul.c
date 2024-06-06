#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(int ac , char **av)
{
int num1, num2, multi;;

if (ac != 3) {
printf("Error\n");
exit(98);
}
num1 = atoi(av[1]);
num2 = atoi(av[2]);
multi = num1 * num2;
printf("%d\n", multi);
return (0);
}
