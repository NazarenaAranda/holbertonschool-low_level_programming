#include "lists.h"

/**
 * free_dlistint - funcion que libere una list
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	if (head)
	{
		while(head)
		{
			f = head->next;
			free (head);
			head = f;
		}
	}
}

