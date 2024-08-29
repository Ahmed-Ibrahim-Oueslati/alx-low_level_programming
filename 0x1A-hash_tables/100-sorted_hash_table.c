#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - a function that
 * Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - a function that
 * adds an element to a sorted hash table.
 * @ht: input value.
 * @key: input value
 * @value: input value.
 *
 * Return: Upon failure - 0,
 * Succed - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp;
	char *value_cp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_cp;
			return (1);
		}
		tmp = tmp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value_cp);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_cp);
		free(new);
		return (0);
	}
	new->value = value_cp;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}

	return (1);
}

/**
 * shash_table_get - a function that retrieve the value associated with
 * a key in a sorted hash table.
 * @ht: input value.
 * @key: input value.
 *
 * Return: If the key cannot be matched - NULL.
 * Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *new;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	new = ht->shead;
	while (new != NULL && strcmp(new->key, key) != 0)
		new = new->snext;

	return ((new == NULL) ? NULL : new->value);
}

/**
 * shash_table_print - a function that
 * Prints a sorted hash table in order.
 * @ht: input value.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *new;

	if (ht == NULL)
		return;

	new = ht->shead;
	printf("{");
	while (new != NULL)
	{
		printf("'%s': '%s'", new->key, new->value);
		new = new->snext;
		if (new != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - a function taht prints a
 * sorted hash table in reverse order.
 * @ht: Input value
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *new;

	if (ht == NULL)
		return;

	new = ht->stail;
	printf("{");
	while (new != NULL)
	{
		printf("'%s': '%s'", new->key, new->value);
		new = new->sprev;
		if (new != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete -  a function that
 * Deletes a sorted hash table.
 * @ht: input value
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *new, *tmp;

	if (ht == NULL)
		return;

	new = ht->shead;
	while (new)
	{
		tmp = new->snext;
		free(new->key);
		free(new->value);
		free(new);
		new = tmp;
	}

	free(head->array);
	free(head);
}
