#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */
char *strcat(char *dest, const char *src)
{
	int i;

	int dLen;

	i = 0;
	dLen = 0;
	while (dest[i++])
	{
		dLen++;
	}

	for (i = 0; src[i++]; i++)
	{
		dest[dLen++] = src[i];
	}

	return (dest);
}
