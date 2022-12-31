#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
