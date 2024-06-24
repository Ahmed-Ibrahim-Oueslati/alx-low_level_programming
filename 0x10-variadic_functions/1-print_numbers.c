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



va_start(ap, n);

for (i = 0; i < n; i++)


{
if (separator != NULL &&  i != n - 1)
{
	printf("%d%s", va_arg(ap, int), separator);
}

if (separator == NULL || i == n - 1)
{
	printf("%d", va_arg(ap, int));
}
count++;
}

va_end(ap);

putchar('\n');

}

