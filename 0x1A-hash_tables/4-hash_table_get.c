#include "hash_tables.h"

/**
 * hash_table_get - a function that
 *retrieves a value associated with a key.
 * @ht: input value
 * @key: input value
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	new = ht->array[index];
	while (new && strcmp(new->key, key) != 0)
		new = new->next;

	return ((new == NULL) ? NULL : new->value);
}
