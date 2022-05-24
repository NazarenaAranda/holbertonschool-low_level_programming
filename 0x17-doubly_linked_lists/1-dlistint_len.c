#include "lists.h"
/**
 * dlistint_len - numero de nodos de la double linked lists
 * @h: head (primer nodo)
 * Return: the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elementos = 0;

	while (h)
	{
		elementos++;
		h = h->next;
	}

	return (elementos);
}
