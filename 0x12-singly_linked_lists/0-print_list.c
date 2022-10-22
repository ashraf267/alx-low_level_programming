#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all elements of a
 * list_t list
 * @h: the given list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;

		h = h->next;
	}
	return (n);
}
