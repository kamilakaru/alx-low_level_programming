#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - counts the number of elements
 * @h: input
 *
 * Return: the number of dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
