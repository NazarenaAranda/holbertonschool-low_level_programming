#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_all - function
* @format: as kd
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int a = 0;
	int i = 0;
	char *comaa = ", ";
	char *h;

	va_start(list, format);

	while (format && format[i])
		i++;

	while (format && format[a])
	{
		if (a == (i - 1))
		{
			comaa = "";
		}
		switch (format[a])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), comaa);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), comaa);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), comaa);
			break;
		case 's':
			h = va_arg(list, char *);
			if (h == NULL)
				h = "(nil)";
					printf("%s%s", h, comaa);
			break;
		}
		a++;
	}
	printf("\n");
	va_end(list);
}
