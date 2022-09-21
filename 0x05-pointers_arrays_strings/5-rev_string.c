#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int len;

	int i;

	char tmp;

	i = 0;
	len = 0;
	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
