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
int i, count;
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
count = 0;
break;
case 'i':
printf("%d", va_arg(ap, int));
count = 0;
break;
case 'f':
printf("%f", va_arg(ap, double));
count = 0;
break;
case 's':
str = va_arg(ap, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
count = 0;
break;
default:
count = 1;
break;
}
if (format[i + 1] != '\0' && count == 0)
printf(", ");
i++;
}
printf("\n");
va_end(ap);
}

