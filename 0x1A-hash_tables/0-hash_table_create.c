#include "hash_tables.h"

/**
 * hash_table_create - crear una hash table
 * @size: tamaño de array
 * Return: ash table creada
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL || size == 0)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
