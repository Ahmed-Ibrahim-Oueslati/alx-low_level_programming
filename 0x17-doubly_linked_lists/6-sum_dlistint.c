#include "lists.h"
/**
 * sum_dlistint - a function that return
 * the sum of all the data (n) of a list
 * @head: input value
 * Return: Sum
*/
int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}

