#include "main.h"

/**
 * _strncpy - Copiar una string
 * Description: Esta funcion va a copiar una string desde cero con @n bytes
 * @dest: String
 * @src: String que va a copiar @dest
 * @n: Numero de bytes que copiar
 * Return: @n bytes o @src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(dest + i) != '\0')
	{
		if (*src != '\0')
			*(dest + i) = *src++;
		else
			*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
