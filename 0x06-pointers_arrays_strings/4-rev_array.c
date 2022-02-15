#include "main.h"

/**
 * reverse_array - invertir el contenido de array
 * @a: array 
 * @n: numero de elementos de  array
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
