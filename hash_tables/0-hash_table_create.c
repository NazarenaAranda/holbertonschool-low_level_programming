#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: The size of the array
 * Return: Pointer to the newly created hash table
* or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(sizeof(hash_table_t));

	if (size == 0 || new_hash == NULL)
		return (NULL);

	new_hash->size = size;
	new_hash->array = malloc(size * sizeof(hash_node_t *));

	if (new_hash->array == NULL)
	{
		return (NULL);
		free(new_hash);
	}
	return (new_hash);
}
