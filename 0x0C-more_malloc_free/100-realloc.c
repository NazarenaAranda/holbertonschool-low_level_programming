#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - array de enteros
 * @ptr: puntero
 * @old_size: tama√o viejo
 * @new_size: nuevo tama√o
 * Return: puntero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = ptr;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);

	p = malloc(new_size);

	return (p);
}
