#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - prints strings, followed by a new line
* @n: The number of parameters.
* @separator: the separator between the nbs
* Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)

{
va_list ap;
unsigned int i;
char *s;



va_start(ap, n);

for (i = 0; i < n; i++)



{
s = va_arg(ap, char *);
if (separator != NULL &&  i != n - 1)

{

if (s != NULL)
	printf("%s%s", s, separator);
else
printf("(nil)%s", separator);
}

if (separator == NULL || i == n - 1)

{
	if (s != NULL)
	printf("%s", s);
else
printf("(nil)");
}
}

va_end(ap);

putchar('\n');

}
