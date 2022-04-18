#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenar dos string
 * @s1: string 1
 * @s2: string 2
 * @n: numero de  bytes de s2 concatenados a s1
 * Return: s1 + n bytes de s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *punt;
	unsigned int a, i = 0, b = 0;
	unsigned int  c = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[b] != '\0')
		b++;

	if (b < n)
		n = b;

	punt = malloc((1 + i + n)*(sizeof(char)));
	if (punt == NULL)
		return (NULL);
	c = 0;
	b = 0;

	for (a = 0; a < (n + i); a++)
	{
		if (s1[a] == '\0')
			b = 1;
		if (b == 0)
			punt[a] = s1[a];
		if (b == 1)
		{
			punt[a] = s2[c];
			c++;
		}
	}

	punt[n + i] = '\0';
	return (punt);
}
