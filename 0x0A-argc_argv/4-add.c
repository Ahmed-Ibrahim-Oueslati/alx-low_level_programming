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
int sum, i, j;
sum = 0;
if (argc > 1)

{
for (i = 1; i < argc ; i++)

{
j = 0;
while (argv[i][j] != '\0')

{
if (argv[i][j] < '0' || argv[i][j] > '9')

{
printf("Error\n");
return (1);
}
j++;
}
sum = atoi(argv[i]) + sum;
}
}
printf("%d\n", sum);
return (0);
}
