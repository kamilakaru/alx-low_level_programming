#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: a pointer to the address of the node
 *
 * Return: head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	head = NULL;
}
