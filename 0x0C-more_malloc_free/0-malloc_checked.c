#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - sdj
* Description: jsad
* @b: memory size
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
