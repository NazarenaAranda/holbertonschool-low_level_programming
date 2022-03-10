#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - sjkd
* @n: number
* @separator: sjdb
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *a;


	va_start(list, n);
	for (i = 0; i < n;)
	{
		a = va_arg(list, char*);
		if (a != NULL)
			printf("%s", a);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

		i++;
	}
	printf("\n");
	va_end(list);
}
