#include "lists.h"

/**
 * add_dnodeint_end - añadir un nuevo nodo al final
 * @head: head
 * @n: nodo
 * Return: direccion del nuevo nodo o NULL si falla
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuev = NULL;
	dlistint_t *a = *head;

	nuev = malloc(sizeof(dlistint_t));
	if (!nuev)
		return (NULL);
	nuev->n = n;
	nuev->next = NULL;
	if (*head)
	{
		while (a->next)
		{
			a = a->next;
		}
		a->next = nuev;
		nuev->prev = a;
	}
	else
	{
		nuev->prev = NULL;
		*head = nuev;
	}
	return (nuev);
}
