#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - multiplicar dos numeros
* @s1: primer string
* @s2: string 2
* @n: variable
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *s;
	unsigned int a = 0, b = 0, c = 0, d;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s2[c] != '\0')
		c++;

	if (c <= n)
		n = c;
	while (s1[a] != '\0')
		a++;


	s = malloc((a + 1 + n) * sizeof(char));
	if (s == NULL)
		return (NULL);
	c++;
	for (d = 0; d < (a + n); d++)
	{
		if (s1[d] == '\0')
			b = 1;
		if (b == 0)
			s[d] = s1[d];
		if (d == 1)
		{
			s[d] = s2[c];
			c++;
		}
	}
	s[n + a] = '\0';
	return (s);
}



