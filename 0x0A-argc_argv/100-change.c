#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* main -dfscx
* @argc: number
* @argv: array
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int mone, centa = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	centa = atoi(argv[1]);

	while (centa > 0)
	{
		mone++;
		if ((centa - 25) >= 0)
		{
			centa -= 25;
			continue;
		}
		if ((centa - 10) >= 0)
		{
			centa -= 10;
			continue;
		}
		if ((centa - 5) >= 0)
		{
			centa -= 5;
			continue;
		}
		if ((centa - 2) >= 0)
		{
			centa -= 2;
			continue;
		}
		centa--;
	}

	printf("%d\n", mone);

	return (0);
}
