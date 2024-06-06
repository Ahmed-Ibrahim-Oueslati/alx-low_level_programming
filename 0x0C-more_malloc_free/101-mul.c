#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* _checker - Checks if the string consists of only digits.
* @c: The string to check.
*/
void _checker(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] < '0' || c[i] > '9')
{
printf("Error2\n");
exit(98);
}
}
}
/**
* main - Entry point of the program.
* Description: Multiplies two positive integers provided as arguments
*              and prints the result. Handles errors for invalid arguments
*              and overflow.
* @ac: Number of arguments passed to the program.
* @av: Array of strings containing the arguments.
* Return: 0 on success, 98 on error.
*/
int main(int ac, char **av)
{
char *num1, *num2;
int len1, len2, len_result, i, j, k, leading_zero;
int *result;
char *result_str;
if (ac != 3)
{
printf("Error1\n");
exit(98);
}
_checker(av[1]);
_checker(av[2]);
num1 = av[1];
num2 = av[2];
len1 = strlen(num1);
len2 = strlen(num2);
len_result = len1 + len2;
result = calloc(len_result, sizeof(int));
if (!result)
{
printf("Memory allocation error\n");
exit(98);
}
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int mul = (num1[i] - '0') * (num2[j] - '0');
int p1 = i + j, p2 = i + j + 1;
int sum = mul + result[p2];
result[p1] += sum / 10;
result[p2] = sum % 10;
}
}
result_str = malloc(len_result + 1);
if (!result_str)
{
free(result);
printf("Memory allocation error\n");
exit(98);
}
k = 0, leading_zero = 1;
for (i = 0; i < len_result; i++)
{
if (leading_zero && result[i] == 0)
{
	continue;
}
leading_zero = 0;
result_str[k++] = result[i] + '0';
}
if (k == 0)
{
	result_str[k++] = '0';
} /* If result is zero */
result_str[k] = '\0';
printf("%s\n", result_str);
free(result);
free(result_str);
return (0);
}
