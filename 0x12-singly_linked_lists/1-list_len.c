#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list
 * @h: the given list_t list
 *
 * Return: number of items in h
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
