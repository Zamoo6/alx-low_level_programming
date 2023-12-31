#include "lists.h"

/**
 * dlistint_len - returns the number of elements llist
 *
 * @h: list head
 * Return: the nodes number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
