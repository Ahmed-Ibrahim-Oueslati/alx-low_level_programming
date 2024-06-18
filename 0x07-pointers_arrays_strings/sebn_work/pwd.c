#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int i ;
char *pwd1;
char *list1;

char *arr[18][1]= {"oihhh.llmp"};

for (i = 0; i < 18; i++)
{
list1 = *arr[i];
 pwd1 = _pmaking(list1);
 printf("%s\n " , pwd1);
}


return (0);
}
