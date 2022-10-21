#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the
 * beginning of a list_t list
 * @head: pointer to the head of the list_t list
 * @str: string to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	
	char *str_dup;
	
	int len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	str_dup = strdup(str);

	if (str_dup == NULL)
	{
		free(new);
		return (NULL);
	}

	len = 0;
	while (str[len])
	{
		len++;
	}

	new->str = str_dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
