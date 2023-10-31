#include "main.h"
#include <stdlib.h>

/**
 *  * create_array - creates an array of chars
 *   * and initializes it with a specific char.
 *    * Return: a pointer to the array or NULL if size = 0 or if it fails
 *     * @size: size of array
 *      * @c: char to fill array with
 *       *
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

p = malloc(size * sizeof(char));
if (size == 0 || p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
