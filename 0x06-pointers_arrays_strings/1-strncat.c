#include "main.h"
/**
 * _strncat - Esta fundion es parecida a  _strcat
 * @dest: char puntero
 * @src: char puntero
 * @n: int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
