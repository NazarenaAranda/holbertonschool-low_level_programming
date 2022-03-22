#include "lists.h"
/**
  * print_listint - Prints all the elements of a list.
  * @h: Pointer to the start of the list.
  * Return: Number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	int contar;

	for (contar = 0; h != NULL; contar++, h = h ->next)
		printf("%d\n", h->n);

	return (contar);
}
