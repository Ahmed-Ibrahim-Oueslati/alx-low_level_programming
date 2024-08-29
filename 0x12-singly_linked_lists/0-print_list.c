#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * Return: number of nodes
 *@h: pointer to first node
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *traverse = h;

	while (traverse)
	{
		if (traverse->str != NULL)
		{
			printf("[%u] ", traverse->len);
			printf("%s\n", traverse->str);
		}
		else
			printf("[0] (nil)\n");
		traverse = traverse->next;
		i++;
	}
	return (i);
}