#include "main.h"

/**
 * _memset - fills mem with a constant byte
 * @s: given char pointer s
 * @b: given char b
 * @n: given int n
 *
 * Return: a pointer to the mem area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return s;
}
