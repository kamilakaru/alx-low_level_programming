#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer to size_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
