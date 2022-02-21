#include "main.h"
/**
* _memset- function fills the first n bytes of the memory area
* @s: Pointer
* @b: constant
* @n: number of bytes
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	while (n > 0)

	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}

