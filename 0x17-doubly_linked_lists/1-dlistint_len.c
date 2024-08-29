#include "lists.h"
/**
 * dlistint_len - a function that return the number
 * of elements in a linked list
 * @h: input value
 * Return: number
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
