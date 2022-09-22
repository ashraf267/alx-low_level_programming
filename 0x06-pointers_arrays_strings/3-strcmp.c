#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first given string
 * @s2: second given string
 *
 * Return: differences in the two strings, else 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
