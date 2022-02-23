#include "main.h"
/**
* _puts_recursion- writes the string s and a trailing newline to stdout
* @s: string
* Return: String followed a newline
*/

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
