#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to adress the first node
 * @str: value to the new node
 *
 * Return: head of the new list, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		new->str = strdup("(nil)");
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}

	new->next = *head;
	*head = new;

	return (*head);
}
