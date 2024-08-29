#include "hash_tables.h"

/**
 * hash_table_delete - a function that
 * deletes a hash table.
 * @ht: input value
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *new, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			new = ht->array[i];
			while (new != NULL)
			{
				tmp = new->next;
				free(new->key);
				free(new->value);
				free(new);
				new = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
