#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value
*associated with a key
 * @ht: Is the hash table you want to look into
 * @key: Is the key you are looking for
 * Return: The value associated with the element,
*or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx = 0;

	if (!ht || !key)
		return (NULL);

	indx = key_index((unsigned char *)key, ht->size);

	while (ht->array[indx] != NULL)
	{
		if (strcmp(key, ht->array[indx]->key) == 0)
			return (ht->array[indx]->value);
		ht->array[indx] = ht->array[indx]->next;
	}
	return (0);
}
