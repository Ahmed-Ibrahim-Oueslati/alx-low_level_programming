#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function that
 * deletes the node at index index of a linked list
 * @head : input value
 * @index : input value
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i = *head;
	listint_t *l = NULL;
	unsigned int j = 0;

	if
	   (*head == NULL)
return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(i);
		return (1);
	}
	while (j < index - 1)
	{
		if (!i || !(i->next))
			return (-1);
		i = i->next;
		j++;
	}
	l = i->next;
	i->next = l->next;
	free(l);

	return (1);
}

