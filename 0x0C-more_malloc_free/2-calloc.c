#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a memory allocator
 * @nmemb: elementos
 * @size: variable bytes
 * Return: ret
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		str[a] = 0;

	return (str);
}
