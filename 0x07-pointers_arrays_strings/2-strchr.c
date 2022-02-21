#include "main.h"
/**
* _strchr - function returns a pointer to the first occurrence
* @s: string
* @c: character
* Return:  pointer to the first occurrence
*/

char *_strchr(char *s, char c)
	{
		int  i;

		for (i = 0; s[i] >= '\0'; i++)
		{
			if (s[i] == c)
			return (s + i);
		}
		return ('\0');
	}

