#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the given input
 * @accept: the given prefix substring
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byts = 0;

	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byts++;
				break;
			} else if (accept[i + 1] == '\0')
			{
				return (byts);
			}
		}
		s++;
	}
	return (byts);
}
