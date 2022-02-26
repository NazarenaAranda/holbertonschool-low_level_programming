#include <stdio.h>
#include "main.h"
/**
* main - fwedsz
* @argv: string
* @argc: number
* Return: 0
*/

int main(int argc, char *argv[])
{
		int i;

		(void)argv;
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
		return (0);
}
