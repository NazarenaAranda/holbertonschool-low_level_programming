#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	long int ind = 0;

	if (h)
	{
		while (h->next)
		{
			printf("%d\n", h->n);
			ind++;
			h = h->next;
		}
		printf("%d\n", h->n);
		ind++;
	}
	return (ind);
}
