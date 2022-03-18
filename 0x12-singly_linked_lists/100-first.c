#include <stdio.h>

void __attribute__((constructor)) lie(void);
/**
* lie - Prints a string
*
*/
void lie(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
