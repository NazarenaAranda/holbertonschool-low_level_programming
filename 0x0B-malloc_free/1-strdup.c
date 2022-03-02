#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* strdup - duplicate a tring
* @str: string
* Return: NULL of
*/

char *_strdup(char *str)
{
	int a = 0;
	int i = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) ));

	if (s == NULL)
	{
		return (NULL);
	}

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}

