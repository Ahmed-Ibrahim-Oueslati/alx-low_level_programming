#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Entry point of the program.
 *
 * Description: prints the chessboard.
 *@a: array to print
 * Return: Always 0 (success).
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 2 ; i++)
{
for (j = 0 ; j < 8; j++)
{
_putchar(a[i][j]);
}
printf("\n");
}
printf("\n");
for (i = 6; i < 8 ; i++)
{
for (j = 0 ; j < 8; j++)
{
_putchar(a[i][j]);
}
printf("\n");
}

}
