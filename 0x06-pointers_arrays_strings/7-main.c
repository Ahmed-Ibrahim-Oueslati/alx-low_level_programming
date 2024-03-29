#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;
    printf("%s", s);
    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    printf("hello\n");
    return (0);
}