#include "lists.h"

/**
 * get_nodeint_at_index - Get node.
 * @head: Pointer to head
 * @index: Index is the index of the node, starting at 0
 * Return: Returns the nth node of a listint_t linked list or
* NULL if node not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
