#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * Return: void
 * @s: pointer to string to print
 */
void _puts_recursion(char *s)
{
	int j = 0;

	if (s[j] != '\0')
	{
		_putchar(s[j]);
		j++;
		_puts_recursion(s + j);
	}
	else
	_putchar('\n');
}
