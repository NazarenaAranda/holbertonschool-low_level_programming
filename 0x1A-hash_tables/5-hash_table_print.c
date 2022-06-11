#include "hash_tables.h"
/**
 * hash_table_print - iimprimir una hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *nodo = NULL;
	char *sep = "";

	if (!ht)
		return;

	printf("{");

	while (i < ht->size)
	{
		nodo = ht->array[i];

		while (nodo != 0)
		{
			printf("%s'%s': '%s'", sep, nodo->key, nodo->value);
			sep = ", ";
			nodo = nodo->next;
		}
		i++;
	}
	printf("}\n");
}
