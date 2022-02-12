#include "main.h"
/**
*puts_half - print half script
*@str: string
*/
void puts_half(char *str)
{
	int a = 0, b = 0, n;

	while (str[a++])
	b++;

	if ((b % 2) == 0)
	{
	n = b / 2;
	}
	else
	{
	n = ((b + 1) / 2);
	}
	for (a = n; a < b; a++)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
