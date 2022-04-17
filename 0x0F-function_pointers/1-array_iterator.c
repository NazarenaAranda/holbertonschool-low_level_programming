#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - funcion para ejecutar otra funcion
 * @array: puntero al inicio de la array
 * @size: tamaño de la array
 * @action: accion para ejecutar contenido
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
