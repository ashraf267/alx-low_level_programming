#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int dLen = 0;

	while (dest[i++])
	{
		dLen++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[dLen++] = src[i];
	}

	return (dest);
}
