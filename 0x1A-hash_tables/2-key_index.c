#include "hash_tables.h"
/**
 * key_index - función que te dé el index de una key
 * @key: key string
 * @size: tamaño de la array
 * Return: 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
