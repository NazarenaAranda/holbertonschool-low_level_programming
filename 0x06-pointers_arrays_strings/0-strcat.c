#include "main.h"

/**
 * _strcat - concatenar dos strings
 * @dest: concatenar src con esta
 * @src: agregar esta string a dest
 * Return: que el puntero vaya a `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

