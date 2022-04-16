#include "main.h"
/**
 * set_bit - establlece valor de un bit en 1 en un indice dado
 * @n: numero decimal
 * @index: cambiar posicion
 * Return: 1 si funciona o -1 si hay error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int suma = 1, a;
	unsigned long int num = *n;

	if (index < 64)
	{
		if (((num >> index) & 1) == 0)
		{
			for (a = 0; a < index; a++)
			{
				suma = suma * 2;
			}
			num = num + suma;
		}

		(*n) = num;
		return (1);
	}

	return (-1);
}
