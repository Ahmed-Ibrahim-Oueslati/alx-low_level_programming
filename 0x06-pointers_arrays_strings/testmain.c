#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *n = "12345";
char *m = "90347";
char *res;

res = infinite_add(n, m);
 printf("%s + %s = %s\n", n, m, res);
 return (0);

}