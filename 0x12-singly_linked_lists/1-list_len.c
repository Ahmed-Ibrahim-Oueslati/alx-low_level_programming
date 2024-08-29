#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * Return: number of nodes
 *@h: pointer to first node
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *traverse = h;

	while (traverse)
	{
		i++;
		traverse = traverse->next;
	}
	return (i);
}