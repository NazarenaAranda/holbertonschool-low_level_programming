#include "main.h"
#include <stdlib.h>
/**
 * free_grid - libera arraay
 * @grid: ancho
 * @height: altura
 * Return: punteri
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
