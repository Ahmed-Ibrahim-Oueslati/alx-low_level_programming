#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* alloc_grid - Allocates a 2D array of integers.
*
* @width: The width of the grid.
* @height: The height of the grid.
*
* Return: A pointer to the newly allocated 2D array,
* or NULL if width or height is 0 or negative,
* or if memory allocation fails.
*/
int **alloc_grid(int width, int height)
{
int **k;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
/* Allocate memory for the array of pointers to rows */
k = (int **)malloc(height * sizeof(int *));
if (k == NULL)
{
return (NULL);
}
/* Allocate memory for each row and initialize it to 0 */
for (i = 0; i < height; i++)
{
k[i] = (int *)malloc(width * sizeof(int));
if (k[i] == NULL)
{
/* Free any previously allocated memory on failure */
for (j = 0; j < i; j++)
{
free(k[j]);
}
free(k);
return (NULL);
}
for (j = 0; j < width; j++)
{
k[i][j] = 0;
}
}
return (k);
}
