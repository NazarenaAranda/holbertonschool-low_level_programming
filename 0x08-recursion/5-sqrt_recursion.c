#include "main.h"
/**
* _sqr - return squart root
* @x: variable
* @n: whole number
* Return: squart root
*/

int _sqr(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqr(n, ++x));
}

/**
* _sqrt_recursion- function returns the nonnegative square root of x
* @n: whole number
* Return: squart root
*/

int _sqrt_recursion(int n)
{
	return (_sqr(n, 0));
}
