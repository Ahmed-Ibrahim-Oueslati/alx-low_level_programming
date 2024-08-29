#include "lists.h"
/**
 * free_dlistint - a function that free a list
 * @head : input value
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}

