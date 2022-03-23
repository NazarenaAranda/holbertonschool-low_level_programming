#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a
* listint_t linked list.
 * @head: Double pointer of the function
 * @index: Is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 1;
	listint_t *auxiliar = *head, *siguiente;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		siguiente = (*head)->next;
		free(*head);
		*head = siguiente;
		return (1);
	}

	while (index > j)
	{
		auxiliar = auxiliar->next;
		if (auxiliar == NULL)
			return (-1);
		j++;
	}

	if (auxiliar->next == NULL)
		return (-1);

	siguiente = auxiliar->next->next;
	free(auxiliar->next);
	auxiliar->next = siguiente;

	return (1);
}
