#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the listint_t
 * @index: the index of nodes
 *
 * Return: the nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			current = head;
			return (current);
		}

		count++;
		head = head->next;
	}

	return (NULL);
}
