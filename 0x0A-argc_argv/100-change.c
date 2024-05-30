#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point of the program.
* @argc: Number of arguments
* @argv: The listing of elements
* Description: Calculates the minimum number of coins needed to make change.
*
* Return: Always 0 (success), or 1 if there is an error.
*/
int main(int argc, char **argv)

{
int change, x, c25, c10, c5, c2, c1;
change = c25 = c10 = c5 = c2 = c1 = 0;

/* Check if the number of arguments is not equal to 2 */
if (argc != 2)

{
printf("Error\n");
return (1);
}

/* Convert the first argument to an integer */
x = atoi(argv[1]);

/* Validate the converted integer */
if (x <= 0)

{
printf("0\n");
return (0);
}

/* Calculate the number of coins needed */
c25 = x / 25;
x %= 25;
c10 = x / 10;
x %= 10;
c5 = x / 5;
x %= 5;
c2 = x / 2;
x %= 2;
c1 = x;

/* Calculate the total number of coins */
change = c25 + c10 + c5 + c2 + c1;

/* Print the result */
printf("%d\n", change);
return (0);
}

