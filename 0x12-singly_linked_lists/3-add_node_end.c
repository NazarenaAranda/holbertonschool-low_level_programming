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
 * add_node_end - funcion para añadir
* un nuevo nodo al final
 * @head: primer nodo
 * @str: string
 * Return: he address of the new element
* or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevonodo, *ultimo = *head;

	nuevonodo = malloc(sizeof(list_t));

	if (nuevonodo == NULL)
	{
		return (NULL);
	}
	else
	{
		nuevonodo->str = strdup(str);
		nuevonodo->len = _strlen(str);
		nuevonodo->next = NULL;

		if (*head == NULL)
		{
			*head = nuevonodo;
			return (nuevonodo);
		}
		else
		{
			while (ultimo->next != NULL)
				ultimo = ultimo->next;
			ultimo->next = nuevonodo;
		}
	}
	return (nuevonodo);
}

