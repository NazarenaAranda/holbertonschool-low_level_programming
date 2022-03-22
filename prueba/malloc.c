#include <stdio.h>
#include <stdlib.h>

/**
* main - jasdb
*/

int main(void)
{

	int *a;
	*a = 30;

	a = malloc(sizeof(int));
	printf("This is ");
	printf("%i", *a);
	printf("\n");



	return (0);
}
