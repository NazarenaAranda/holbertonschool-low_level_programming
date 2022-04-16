#include "main.h"
/**
 * clear_bit - con esta funcion establecemos el valor de
* un bit a 0 en un indice dado
 * @n: num
 * @index: indice
 * Return: Si funciona  1 y si no -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

