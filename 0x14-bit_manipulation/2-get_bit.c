#include "main.h"
/**
 * get_bit - Bit en un indice dado
 * @n: Numero
 * @index: indice para devolver el vlaor
 * Return: -1 si hay error o el vallor del bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
