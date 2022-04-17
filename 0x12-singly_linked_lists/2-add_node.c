#include "lists.h"

/**
 * _strlen - longitud  dde una string
 * @s: puntero al principio de la str
 * Return: largo de la string
 */
int _strlen(const char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
		leng++;
	return (leng);
}

/**
 * add_node - fncion para añadir otro nodo
 * @head: primer nodo
 * @str: string
 * Return: the address of the new element
*or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevonodo;

	nuevonodo = malloc(sizeof(list_t));

	if (nuevonodo == NULL)
		return (NULL);

	nuevonodo->str = strdup(str);
	nuevonodo->len = _strlen(str);
	nuevonodo->next = *head;
	*head = nuevonodo;
	return (nuevonodo);
}
