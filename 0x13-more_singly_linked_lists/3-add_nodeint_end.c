#include "lists.h"
/**
 * add_nodeint_end - Adds a node at the end of a list.
 * @head: Double pointer to the start of the list.
 * @n: Value of the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *auxiliar;
	listint_t *newnode;
	auxiliar = *head;

	while (auxiliar && auxiliar->next != NULL)
		auxiliar = auxiliar->next;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (auxiliar)
		auxiliar->next = newnode;
	else
		*head = newnode;

	return (newnode);
}
