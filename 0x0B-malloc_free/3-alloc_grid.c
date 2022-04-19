#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - array de entero
 * @width: ancho
 * @height: altura
 * Return: puntero
 */
int **alloc_grid(int width, int height)
{
	int **p, a, b = 0;

	if (width < 1 || height < 1)
		return (NULL);

	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		p[a] = malloc(width * sizeof(int));
		if (p[a] == NULL)
			b = 1;
	}

	if (b == 1)
	{
		for (a = 0; a < height; a++)
			free(p[a]);
		free(p);
	}
	b = 0;
	
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			p[a][b] = 0;
	}
	return (p);
}
