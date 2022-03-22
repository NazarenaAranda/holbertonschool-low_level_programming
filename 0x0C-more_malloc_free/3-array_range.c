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
	int *ptr = NULL;
	int m, a, cont;

	cont = 0;
	if (min > max)

		return (NULL);

	ptr = ((malloc((max - min) + 1))sizeof(int) * a)

	if (ptr != NULL)
	{
		for (m = min, m <= max, m++);
		{
			ptr[cont] = m
			m++;
		}
		return (ptr);
	}
	return (NULL);
}
