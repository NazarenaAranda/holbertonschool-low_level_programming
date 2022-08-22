#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the
*hash table
 * @ht: The hash table you want to add or update the key
 * @key: Is the key. key can not be an empty string
 * @value: Is the value associated with the key. value must
*be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *a = NULL, *b = NULL;
	unsigned long int index;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	b = ht->array[index];

	while (b)
	{
		if (strcmp(key, b->key) == 0)
		{
			free(b->value);
			b->value = strdup(value);
			return (1);
		}
		b = b->next;
	}
	a = malloc(sizeof(hash_node_t));

	if (a == NULL)
		return (0);
	a->key = strdup(key);
	a->value = strdup(value);
	a->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = a;
		return (1);
	}
	b = ht->array[index];
	a->next = b;
	ht->array[index] = a;
	return (1);
}
