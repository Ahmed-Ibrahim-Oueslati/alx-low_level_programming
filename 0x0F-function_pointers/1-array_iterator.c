#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a func given as parameter on each element of array
 * Return: void
 * @array: array to iterate on
 * @size: size of array
 * @action: pointer to function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
		action(array[i]);
}
