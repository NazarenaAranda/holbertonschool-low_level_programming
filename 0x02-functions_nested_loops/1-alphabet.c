#include <stdio.h>

/**
* print_alphabet - print the alphabet
*
* Return: always void
*/
void print_alphabet(void)
{
char a;
for (a = 'a' ; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
}
