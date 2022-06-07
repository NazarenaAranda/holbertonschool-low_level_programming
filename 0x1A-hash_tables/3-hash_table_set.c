#include "hash_tables.h"
/**
 *hash_table_set - agregar un elemento a la hash table
 *@ht: hash table a la que desea agregar o actualizar key/value
 *@key: key (no puede ser vacia)
 *@value: valor asociado a key, debe ser duplicado
 *Return: 1 si tiene exito, 0 si pasa otra cosa
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *a = NULL, *b = NULL;
	unsigned long int indi;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	indi = key_index((const unsigned char *)key, ht->size);

	b = ht->array[indi];


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

	if (ht->array[indi] == NULL)
	{
		ht->array[indi] = a;
		return (1);
	}
	b = ht->array[indi];
	a->next = b;
	ht->array[indi] = a;
	return (1);
}
