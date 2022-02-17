#include "main.h"

/**
* reverse_array - Invertir el contenido de una array
* @n: Numero de elementos de la array
* @a: Array
*/

void reverse_array(int *a, int n)
{
	int c, i;

	for (c = 0; c < (n / 2); c++)
	{
		i = a
		[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = i;
	}
}
