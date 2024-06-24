#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints numbers, followed by a new line
* @n: The number of parameters.
* @separator: the separator between the nbs
* Return: Always 0 (success).
*/
void print_numbers(const char *separator, const unsigned int n, ...)

{
va_list ap;
unsigned int i;


if (n != 0)
{
va_start(ap, n);

for (i = 0; i < n; i++)


{
if (separator != NULL)
{
	printf("%d%s", va_arg(ap, int), separator);
}
else

{
	printf("%d", va_arg(ap, int));
}
}

va_end(ap);

putchar('\n');

}
}
