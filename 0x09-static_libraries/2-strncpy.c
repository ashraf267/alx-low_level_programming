#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: at most n bytes from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int s_len;

	i = 0;
	s_len = 0;
	while (src[i++])
	{
		s_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = s_len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
