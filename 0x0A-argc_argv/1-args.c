#include <stdio.h>
#include "main.h"
/**
* main - dsad
* @argv: string
* @argc: numbers
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
			;
		printf("%d\n", i - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
