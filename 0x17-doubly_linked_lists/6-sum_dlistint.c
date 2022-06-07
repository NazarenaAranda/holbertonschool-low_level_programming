#include "lists.h"
/**
 * sum_dlistint - retorna la suma de todos los datos
 * @head: head
 * Return: la suma de todos los datos (n) o si la lista está vacía, ret 0
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
