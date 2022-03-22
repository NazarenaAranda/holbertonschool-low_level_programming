#include "lists.h"
/**
  * print_listint - Prints all the elements of a list.
  * @h: Pointer to the start of the list.
  * Return: Number of elements in the list.
  */
size_t listint_len(const listint_t *h)
{
	int contar = 0;

	while (h != NULL)
	{
		contar++;
		h = h->next;
	}
	return (contar);
}
