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
int sum;
if (argc < 3)

{
printf("Error\n");
return (1);
}
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);

return (0);
}
