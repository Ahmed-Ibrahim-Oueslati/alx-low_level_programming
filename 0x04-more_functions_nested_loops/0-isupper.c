#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point of the program.
 *
 * Description: checks the character is uppercase
 *
 * Return: 1 if c is uppercase  
 * @c: parameter to check 
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return(1);
}
else  
return (0);   
}
