#include "main.h"
/**
* factorial- return factorial
* @n: whole number
* Return: number factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
