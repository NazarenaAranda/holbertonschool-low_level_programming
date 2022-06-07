#include "lists.h"

/**
 * get_dnodeint_at_index - funcion que returne nodo
 * @head: head
 * @index: indice del nodo a partir de 0
 * Return: nodo o Null si el nodo no existe
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		head = head->next;
		count++;
		if (index == count)
			return (head);
	}
	return (NULL);
}
