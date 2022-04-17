#include "function_pointers.h"
/**
 * int_index - funcion que busca entero
 * @array: puntero al inicio de la array
 * @size: tamaño
 * @cmp: comparar
 * Return: si hay un error -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array == NULL || cmp == NULL || size < 0)
		return (-1);

	while (a < size)
	{
		a++;
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
