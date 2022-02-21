#include "main.h"
/**
* _strspn - calculates the length
* @s: string
* @accept: string
* Return: c
*/

unsigned int _strspn(char *s, char *accept)
{
int a;
int b;
int c;

a = 0;
c = 0;

while (s[a] != '\0')
{
	b = 0;
	while (accept[b] != '\0')
	{
		if (s[a] == accept[b])
		{
			c++;
			break;
		}
	b++;
	}
		if (accept[b] == '\0')
			break;
		a++;
}
return (c);
}

