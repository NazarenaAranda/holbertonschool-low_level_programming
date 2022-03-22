#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Double pointer.
 * Return: The head nodes data(n).
 **/

int pop_listint(listint_t **head)
{
	int numero;
	listint_t *auxiliar;

	if (*head == NULL)
		return (0);

	auxiliar = *head;
	*head = (*head)->next;
	numero = auxiliar->n;
	free(auxiliar);
	return (numero);
}
