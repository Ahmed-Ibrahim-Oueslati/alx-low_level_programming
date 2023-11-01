#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array
 * Return: void
 * @grid: the grid / 2d array to free
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
