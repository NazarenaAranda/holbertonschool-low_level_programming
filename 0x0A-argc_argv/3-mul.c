#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* main - iadwhb
* @argv: string
* @argc: number
* Return: 0
*/

int main(int argc, char *argv[])
{
	int mulpl;

	(void)argv;
	if (argc == 3)
	{
		mulpl = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mulpl);
	}
	else
	{
		puts("Error");
	}
	return (0);
}
