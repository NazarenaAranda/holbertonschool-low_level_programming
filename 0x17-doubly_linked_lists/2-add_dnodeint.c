#include "lists.h"
/**
 * add_dnodeint - agregar un nuevo nodo al comienzo
 * @head: head
 * @n: nuevo nodo
 * Return: dirección del nuevo elemento, o NULL si falló
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuev = NULL;

	nuev = malloc(sizeof(dlistint_t));

	nuev->n = n;
	nuev->prev = NULL;
	if (*head)
	{
		(*head)->prev = nuev;
		nuev->next = *head;
	}
	else
		nuev->next = NULL;
	*head = nuev;
	return (nuev);
}

