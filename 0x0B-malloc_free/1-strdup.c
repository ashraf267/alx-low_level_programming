#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 * @str: the given string
 *
 * Return: NULL, if str = NULL or if insufficient memory was
 * available. On success, it returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;

	int i;

	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		duplicate[i] = str[i];
	}

	duplicate[len] = '\0';
	
	return (duplicate);
}
