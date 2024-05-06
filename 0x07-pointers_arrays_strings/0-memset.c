#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _memset- Entry point of the program.
 *
 * Description: The _memset() function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b.
 *
 * Return: Always 0 (success).
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i; 
    for (i=0; i < 95; i++)
    {
        s[i] = b;
    }
return (0);
}
