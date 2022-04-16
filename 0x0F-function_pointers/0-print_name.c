#include "function_pointers.h"
/**
 * print_name - imprimir nombre
 * @name: name
 * @f: func
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	f(name);
}
