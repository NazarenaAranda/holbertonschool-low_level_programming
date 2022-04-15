#include "main.h"
/**
 * binary_to_uint - convertit numero binarioo a entero unsigned
 * @b: puntero al primer caracter de string
 * Return: 0 o numero convertido
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convertido = 0;
	unsigned int aux = 1;
	int i = 0, j = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
			convertido += aux;
	}

	return (convertido);
}
