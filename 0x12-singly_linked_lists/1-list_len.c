#include "lists.h"
/**
* list_len - returns number of elements
* @h: head
* Return: numbers
*/
size_t list_len(const list_t *h)
{
	size_t a = 0;
	const list_t *n;

	n = h;

	while (n != NULL)
	{
		n = n->next;
		a++;
	}
	return (a);
}
