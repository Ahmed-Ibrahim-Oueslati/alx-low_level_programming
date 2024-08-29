#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at end of list
 * @head: head of list
 * @str: string data to put in new node
 * Return: address of new element ot NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *lastnode = NULL;

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	lastnode = *head;
	while (lastnode->next)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = newnode;
	return (newnode);
}