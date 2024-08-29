#include "lists.h"
/**
 * get_dnodeint_at_index - a function that
 * returns the nth node of a list
 * @head: input value
 * @index: input value
 * Return: a node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;
	dlistint_t *new;

	s = 0;
	if (head == NULL)
		return (NULL);

	new = head;
	while (new)
	{
	if (index == s)
	return (new);
		s++;
		new = new->next;
	}
	return (NULL);
}

