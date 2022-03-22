#include "lists.h"
/**
  * add_nodeint - Adds a new node at the beginning of the list.
  * @head: Pointer to the first element of the list.
  * @n: New node.
  * Return: Address of the new node or NULL if it failed.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (newnode);
}
