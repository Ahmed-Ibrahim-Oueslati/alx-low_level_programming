#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * Return: the index of the first element
 * for which the cmp func doesn't return 0
 * @array: array to search in
 * @size: size of array
 * @cmp: function used to compare values in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
