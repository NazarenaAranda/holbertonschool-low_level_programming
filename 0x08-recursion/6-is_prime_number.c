#include "main.h"
/**
* _prime- integer a prime number
* @n: integer
* @i: variable
* Return: prime
*/

int _prime(int n,int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		if (n <= 1 && n % i == 0 && n != i)
			return (0);

		else if (i == n)
			return (1);
	
		return (_prime (n, i + 1));
	}
	return (0);
}

/**
* is_prime_number- number prime
* @n: integer
* @i: variable
* Return: prime
*/

int is_prime_number(int n)
{
	return (_prime (n, 1));
}
