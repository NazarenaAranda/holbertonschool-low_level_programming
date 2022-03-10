#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* sum_them_all - ksaad
* @n: number
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(list, int);

	if (n == 0)
	{
		return (0);
	}

	va_end(list);
	return (sum);
}
