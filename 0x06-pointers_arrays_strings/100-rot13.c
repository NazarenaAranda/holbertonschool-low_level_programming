#include "main.h"
/**
 * rot13 - codificar en rot13
 * @i: string a codificar
 * Return: string codificada
 */
char *rot13(char *i)
{
	int a;
	char b;

	for (a = 0; i[a] != '\0'; a++)
	{
		b = i[a];

		while ((i[a] >= 'n' && i[a] <= 'z')
		|| (i[a] >= 'N' && i[a] <= 'Z'))
		{
			i[a] = i[a] - 13;
			break;
		}
		if ((b >= 'a' && b <= 'm') || (b >= 'A'
		&& b <= 'M'))
		{
			i[a] = b + 13;
		}
	}
	return (i);
}
