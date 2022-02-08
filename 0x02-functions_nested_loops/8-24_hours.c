#include "main.h"

/**
* jack_bauer - print jack bauer time
*
* Return: always void
*/
int jack_bauer(void)
{
int i;
int j;
int k;
int l;
for (i = '0'; i <= '2'; i++)
{
for (j = '0'; j <= '9'; j++)
{
if (i == '2' && j == '4')
{
return (0);
}
for (k = '0'; k <= '5'; k++)
{
for (l = '0'; l <= '9'; l++)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(k);
_putchar(l);
_putchar('\n');
}
}
}
}
return (0);
}
