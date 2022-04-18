#include "main.h"
/**
 * leet - cod
 * @i: puntero a string a codificar
 * Return: string codific
 */
char *leet(char *i)
{
	int a, b;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O',
	't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7',
	'7', '1', '1'};

	while (i[a] != '\0')
	{
		for (b = 0; b < 10; b++)
		{
			if (i[a] == letters[b])
				i[a] = num[b];
		}
	a++;
	}
	return (i);
}
