#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: head node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}