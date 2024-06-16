#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *@av:..
 *@ac:..
 * Return: Always 0 (success).
 */
int main(int ac, char **av)
{
unsigned char *main_ptr;
int num_bytes, i;
if (ac != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(av[1]) < 0)
{
printf("Error\n");
exit(2);
}
main_ptr = (unsigned char *)main;

num_bytes = atoi(av[1]);
for (i = 0; i < num_bytes; i++)
{
printf("%02x", main_ptr[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
return (0);
}
