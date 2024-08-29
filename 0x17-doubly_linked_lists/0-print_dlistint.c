#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - a function that prints all the elements
 * of a list
 * @h: input value
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
