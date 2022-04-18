#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array
 * @min: min number
 * @max: number max
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, b;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min) + 1) * (sizeof(int)));

	if (ptr == NULL)
		return (NULL);

	b = 0;
	for (a = min; a <= max; a++)
	{
		ptr[b] = a;
		b++;
	}
	return (ptr);
}
