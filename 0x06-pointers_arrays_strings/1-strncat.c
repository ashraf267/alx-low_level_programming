#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: at most n bytes from src to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int d_len;

	i = 0;
	d_len = 0;
	while (dest[i++])
	{
		d_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[d_len++] = src[i];
	}
	return (dest);
}
