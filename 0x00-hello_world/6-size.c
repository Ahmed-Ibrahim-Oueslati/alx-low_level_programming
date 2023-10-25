#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the size of vars.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
printf("Size of a char:%d byte(s)\n", sizeof(char));
ptintf("Size of an int:%d byte(s)\n", sizeof(int));
printf("Size of a long int:%d byte(s)\n", sizeof(long int));
printf("Size of a long long int:%d byte(s)\n", sizeof(long long int));
printf("Size of a float:%d byte(s)\n", sizeof(float));
return (0);
}
