#include "main.h"
#include <unistd.h>

/**
 * _putchar - escribe el caracter c en stdout
 * @c: imprimo este caracter
 *
 * Return: si sale bien 1.
 * En caso de error, se devuelve -1 y errno se establece correctamente.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
