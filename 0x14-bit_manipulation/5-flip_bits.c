#include "main.h"
/**
 * flip_bits - devolver cantidad de bits que se necesita voltear
 * @n: num
 * @m: cambiar numero
 * Return: numero de bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int marcador = 0, contador = 0;

	marcador = n ^ m;

	while (marcador > 0)
	{
		if (marcador & 1)
			contador++;
		marcador >>= 1;
	}
	return (contador);
}
