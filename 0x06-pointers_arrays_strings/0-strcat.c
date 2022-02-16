#include "main.h"
/**
* _strcat - concatenar dos strings
* @dest: concatenar con src
* @src: concatenar con dest
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i= 0, c;

	while (src[i] != '\0')
	{
		i++;
	}

		for (c = 0; src[c] != '\0'; c++, i++)
	{		
		dest[i] = src[c];
	}
		return (dest);
}

