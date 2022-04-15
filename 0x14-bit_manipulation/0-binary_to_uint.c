#include "main.h"
/**
 * binary_to_uint - convertit numero binarioo a entero unsigned
 * @b: puntero al primer caracter de string
 * Return: 0 o numero convertido
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int convertid = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
	while (b[i] >= 'a' && b[i] <= 'z')
		return (0);

	convertid <<= 1;
	convertid = convertid + b[i] - '0';
	i++;
	}
	return (convertid);
}
