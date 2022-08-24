#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *a = NULL;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				while (ht->array[i] != NULL)
				{
					a = ht->array[i]->next;
					free(ht->array[i]->key);
					free(ht->array[i]->value);
					free(ht->array[i]);
					ht->array[i] = a;
				}
			}
			else
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
