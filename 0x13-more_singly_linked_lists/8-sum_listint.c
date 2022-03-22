#include "lists.h"
/**
  * sum_listint - function that returns the sum of all the data (n) of a listint_t linked list.
  * head: pointer of the address of the linked list.
  * Return: sum of all elements
  */
int sum_listint(listint_t *head)
{
	int suma = 0;
	listint_t *auxiliar;

	auxiliar = head;
	while (auxiliar != NULL)
	{
		suma += auxiliar ->n;
		auxiliar = auxiliar->next;
	}
	return (suma);
}
