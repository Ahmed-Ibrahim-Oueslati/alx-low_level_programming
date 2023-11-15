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
char *generatePassword(void)
{
    static char a[] = "hhh"; // Use static to keep the string in memory

    return a;
}

int main(void)
{
    char *password = generatePassword();

    printf("Generated Password: %s\n", password);

    return 0; // Indicates successful execution
}
