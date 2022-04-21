#include "lists.h"

/**
 * *add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to adress the first node
 * @str: value to the new node
 *
 * Return: head of the new list, otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *dupstr;

	if (str == NULL)
		return (NULL);
	dupstr = strdup(str);
	if (dupstr == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = dupstr;
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
