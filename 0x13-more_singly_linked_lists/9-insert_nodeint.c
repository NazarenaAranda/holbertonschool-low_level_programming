#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a new node at a given position.
 * @head: Double pointer of the list.
 * @idx: Index of the list where the new node should be added. Index starts at 0.
 * @n: Value of new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int node = 0;
	listint_t *auxiliar, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	auxiliar = *head;
	while (idx > node)
	{
		auxiliar = auxiliar->next;
		if (auxiliar == NULL)
			return (NULL);
		node++;
	}

	new->next = auxiliar->next;
	auxiliar->next = new;
	return (new);
}
