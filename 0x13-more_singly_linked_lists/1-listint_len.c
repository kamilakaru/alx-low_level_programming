#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pinter to size_t
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *current = h;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
