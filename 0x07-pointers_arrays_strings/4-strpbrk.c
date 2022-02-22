#include "main.h"
/**
* _strpbrk- function locates the first occurrence in the string
* s of any of the bytes in the string accept
* @s: string where to locate the first occurrence
* @accept: string
* Return: pointer to the byte in s that matches one of the
* accept bytes or NULL if it does not find said byte
*/

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	char *p;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (s[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
			b++;
		}
	a++;

	}
	return (0);
}
