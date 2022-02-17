#include "main.h"
/**
* _strncat- Esta funcion es parecida a _strcat
* @dest:puntero 2
* @src: puntero 1
* @n:bytes
* Return: puntero a dest
*/

char *_strncat(char *dest, char *src, int n)

{
	int i = 0, c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[c] != '\0' && c < n)
	{
		dest[i + c] = src[c];
			c++;
	}

	dest[i + c] = '\0';

	return (dest);
}
