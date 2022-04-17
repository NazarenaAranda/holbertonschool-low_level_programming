#include "lists.h"
/**
 * free_list - funcion para liberar
 * @head: puntero al primer nodo
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
