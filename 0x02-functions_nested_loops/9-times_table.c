#include "./main.h"

/**
 * times_table - prints th 9 times table
 * Return: void
 */
void times_table(void)
{
int a, b, eq;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			eq = a * b;
			_putchar(44);
			_putchar(32);
			if (eq <= 9)
			{
				_putchar(32);
				_putchar(eq + 48);
			}
			else
			{
				_putchar((eq / 10) + 48);
				_putchar((eq % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
