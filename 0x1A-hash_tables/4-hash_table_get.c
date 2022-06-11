#include "hash_tables.h"
/**
 * hash_table_get - recuperar un valor de una clave
 * @ht: hash table a consultar
 * @key: key es la clave que se busca
 * Return: valor del elemento, o NULL si no se ha podido encontrar la clave
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	while (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}

	return (0);
}
