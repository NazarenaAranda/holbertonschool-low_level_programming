#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* main - sadzx
* @argc: number
* @argv: array
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int digit, sum, nume = 0;

	for (nume = 1; nume < argc; nume++)
	{
		for (digit = 0; argv[nume][digit]; digit++)
		{
			if (argv[nume][digit] < '0' || argv[nume][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[nume]);
	}

	printf("%d\n", sum);
	return (0);
}
