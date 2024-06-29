#include "variadic_functions.h"

/**
* print_all - Prints various types of arguments based on a format string.
*
* @format: A string representing the types of arguments passed.
*          'c' for char, 'i' for int, 'f' for float, 's' for string.
* @...: A variable number of arguments.
* Return: void.
*/
void print_all(const char * const format, ...)

{
va_list ap;
int i;
char *str;
char c;

va_start(ap, format);
i = 0;
while (format && format[i])

{
switch (format[i])

{
case 'c':
c = va_arg(ap, int);
printf("%c", c);
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
str = va_arg(ap, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
break;
}
if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i'
|| format[i + 1] == 'f' || format[i + 1] == 's'))
printf(", ");
i++;
}

printf("\n");
va_end(ap);
}

