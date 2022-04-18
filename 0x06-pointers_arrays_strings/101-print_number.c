#include "main.h"
/**
 * print_number - funcion que imprimme un numero
 * @n: nummero
 */
void print_number(int n)
{
	unsigned int positivo, num, contar = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			num = -n;
		}
		else
		{
			num = n;
		}
		positivo = num;
		contar = 1;

		while (positivo > 9)
		{
			positivo /= 10;
			contar *= 10;
		}
		for (; contar >= 1; contar /= 10)
			_putchar(((num / contar) % 10) + '0');
	}
}



