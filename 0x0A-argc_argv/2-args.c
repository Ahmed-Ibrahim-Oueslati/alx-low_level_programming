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
int i;
while (i < argc)

{
printf("%s\n", *argv++);
i++;
}
return (0);
}
