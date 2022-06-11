#include "lists.h"

/**
 * delete_dnodeint_at_index - eliminar el nodo del index
*de una dlistint_t linked list
 * @head: head
 * @index: indice del nodo que debe eliminarse (comienza 0)
 * Return: 1 si tuvo éxito, -1 si falló
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nodo_act, *sig, *ant;

	if (!head || !*head )
		return (-1);

	nodo_act = *head;

	if (!index)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
		}
		else
			*head = NULL;
		free(nodo_act);
		return (1);
	}
	while (i < index)
	{
		nodo_act = nodo_act->next;
		if (!nodo_act)
			return (-1);
		i++;
	}
	if (nodo_act->next == NULL)
	{
		nodo_act->prev->next = NULL;
		free(nodo_act);
		return (1);
	}
	sig = nodo_act->next;
	ant = nodo_act->prev;
	ant->next = sig;
	sig->prev = ant;
	free(nodo_act);
	return (1);
}
