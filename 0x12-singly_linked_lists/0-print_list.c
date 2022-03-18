#include "lists.h"
/**
* print_list - Print all elements of a list_a
* @h: Head
* Return: node
*/
size_t print_list(const list_t *h)
{

	size_t  a = 0;
	const list_t *n;
	n = h;

	while (n != NULL)
	{
		if (n->str)
			printf("[%d] %s\n", n->len, n->str);
		else
			printf("[0] (nil)\n");
		n = n->next;
		a++;
	}
	return (a);
}
