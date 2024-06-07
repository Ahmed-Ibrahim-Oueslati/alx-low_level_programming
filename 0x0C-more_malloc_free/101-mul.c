#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Function prototypes */
void check_input(char *num1, char *num2);
char *multiply(char *num1, char *num2);
char *format_result(int *result, int len_result);
void print_result(char *result_str);
/**
* main - Entry point of the program
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, 1 on failure
*/
int main(int argc, char **argv)
{
char *num1, *num2, *result_str;
/* Check if the correct number of arguments is provided */
if (argc != 3)
{
printf("Usage: %s <num1> <num2>\n", argv[0]);
return (1);
}
num1 = argv[1];
num2 = argv[2];
check_input(num1, num2);
/* Perform multiplication */
result_str = multiply(num1, num2);
/* Print the result */
print_result(result_str);
/* Free allocated memory */
free(result_str);
return (0);
}
/**
* check_input - Check if the input strings consist of only digits
* @num1: The first number as a string
* @num2: The second number as a string
*
* Return: void
*/
void check_input(char *num1, char *num2)
{
int i;
for (i = 0; num1[i] != '\0'; i++)
{
if (num1[i] < '0' || num1[i] > '9')
{
printf("Error: %s is not a valid number\n", num1);
exit(1);
}
}
for (i = 0; num2[i] != '\0'; i++)
{
if (num2[i] < '0' || num2[i] > '9')
{
printf("Error: %s is not a valid number\n", num2);
exit(1);
}
}
}
/**
* multiply - Perform multiplication of two numbers
* @num1: The first number as a string
* @num2: The second number as a string
*
* Return: A string representing the product of the two numbers
*/
char *multiply(char *num1, char *num2)
{
int len1 = strlen(num1);
int len2 = strlen(num2);
int len_result = len1 + len2;
int *result = calloc(len_result, sizeof(int));
int i, j;
char *result_str;
if (!result)
{
printf("Memory allocation error\n");
exit(1);
}
/* Perform multiplication */
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
/* Format the result into a string */
result_str = format_result(result, len_result);
/* Free allocated memory */
free(result);
return (result_str);
}
/**
* format_result - Format the result into a string
* @result: The array representing the product of the numbers
* @len_result: The length of the result array
*
* Return: A string representing the formatted result
*/
char *format_result(int *result, int len_result)
{
int i;
int k = 0;
int leading_zero = 1;
char *result_str = malloc(len_result + 1);
if (!result_str)
{
printf("Memory allocation error\n");
exit(1);
}
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
}
result_str[k] = '\0';
return (result_str);
}
/**
* print_result - Print the result
* @result_str: The result string to be printed
*
* Return: void
*/
void print_result(char *result_str)
{
	printf("%s\n", result_str);
}
