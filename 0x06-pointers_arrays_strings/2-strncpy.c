#include "main.h"
/**
* _strncpy - Copiar una string
* Description: Copiar una string desde cero con @n bytes
* @dest: string
* @src: string que va a copiar dest
* @n: numero de bytes que copiar
* Return: @n bytes o @src
*/

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0;

	while (i < n && (dest[i]) != '\0')

	{
		if (*src != '\0')
			*(dest + i) = *src++;
		else
		*(dest + i) = '\0';
			i++;
	}

	return (dest);
}
