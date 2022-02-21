#include "main.h"
/**
* _memcpy-  copies n bytes from memory area src to memory area dest
* @n: number of bytes
* @src: copy n bytes of this memory area
* @dest: to this memory area
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{

unsigned int i = 0;

while (i < n && (dest[i]) != '\0')

{
	if (*src != '\0')
		*(dest + i) = *src++;

	else
	{
		*(dest + i) = '\0';
		i++;
	}

}

return (dest);

}
