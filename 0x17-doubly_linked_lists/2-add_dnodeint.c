#include "lists.h"

/**
 * *add_dnodeint - a function that adds a new node at the beginning
 * @head: a pointer to the head of the dlistint_t list
 * @n: input
 *
 * Return: NULL if the fundtion fails
 * otherwise the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
