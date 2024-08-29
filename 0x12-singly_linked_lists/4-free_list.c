#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * free_list - a function that frees a list
 * @head : input value
*/
void free_list(list_t *head)
{
	list_t *l;

	while (head)
	{
		l = head->next;
		free(head->str);
		free(head);
		head = l;
	}
}
