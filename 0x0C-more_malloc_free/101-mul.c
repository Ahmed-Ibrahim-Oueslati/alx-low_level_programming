#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(int ac ; char **av)
{
        if (argc != 3) {
        printf("Usage: %s <int1> <int2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("The first integer is: %d\n", num1);
    printf("The second integer is: %d\n", num2);

return (0);
}
