#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point of the program.
*@argc:nb of arguments
*@argv:the listing of elemnts
* Description: Prints a string to the console.
*
* Return: Always 0 (success).
*/
int main(int argc, char **argv)
{

int change, x, c25, c10, c5, c2, c1;
change = c25 = c10 = c5 = c2 = c1 = 0;
if (argc > 2)
{
printf("Error\n");
return (1);
}

x = atoi(argv[1]);

if (x > 0)
{
if ((x / 25) < x )
{
c25 = x / 25; 
/* i'm trying to find the minimum nb of coins of  of 25 10 5 2 and cents could u help ? */
}
}

change = c25 + c10 + c5 + c2 + c1;
printf("%d\n", change);
    return (0);
}