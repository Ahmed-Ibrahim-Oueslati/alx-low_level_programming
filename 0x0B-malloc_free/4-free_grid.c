#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* free_grid - Entry point of the program.
*
* Description: Prints a string to the console.
*@grid: The 2D grid to be freed.
*@height: The height of the grid.
* Return: Always 0 (success).
*/
void free_grid(int **grid, int height)
{
int  j;
for (j = 0; j < height; j++)
{
free(grid[j]);
}
free(grid);
}
