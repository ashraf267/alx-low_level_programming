#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list
 * @h: a pointer to the head of the list
 *
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
