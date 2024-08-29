#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new
 * node at the end of a list
 * @head : input value
 * @str : input value
 * Return: the address of the new element
 * or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *x = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (x->next)
		x = x->next;

	x->next = n;

	return (n);
}
