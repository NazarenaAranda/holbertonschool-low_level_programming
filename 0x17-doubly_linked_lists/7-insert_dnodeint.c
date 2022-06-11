#include "lists.h"
/**
 * insert_dnodeint_at_indexv - inserte un nuevo nodo en una posición dada
 * @idx: índice de la lista donde se debe agregar el nuevo nodo
 * @n: nuevo nodo
 * @h: head
 * Return: dirección del nuevo nodo, o NULL si falló
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *nuev, *tmp = *h;

	nuev = malloc(sizeof(dlistint_t));

	if (nuev == 0 || h == 0)
		return (NULL);
	
	nuev->n = n;
	nuev->next = NULL;

	if (!idx)
		return (add_dnodeint(h, n));

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			nuev->next = tmp->next;
			nuev->prev = tmp;
			tmp->next->prev = nuev;
			tmp->next = nuev;
			return (nuev);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}	
