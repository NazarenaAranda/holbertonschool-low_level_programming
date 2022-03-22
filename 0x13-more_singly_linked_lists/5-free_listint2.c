#include "lists.h"
/**
  * free_listint2 - free a list
  * @head: double pointer to the head.
  */
void free_listint2(listint_t **head)
{
	listint_t *auxiliar;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		auxiliar = (*head)->next;
		free(*head);
		*head = auxiliar;
	}

	head = NULL;
}
