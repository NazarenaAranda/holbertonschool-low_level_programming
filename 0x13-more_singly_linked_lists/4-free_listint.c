#include "lists.h"
/**
  * free_listint - Free a listint_t
  * @head: Pointer to the list
  **/
void free_listint(listint_t *head)
{
	listint_t *auxiliar;

	while (head != NULL)
	{
		auxiliar = head;
		head = head->next;
		free(auxiliar);
	}
}
