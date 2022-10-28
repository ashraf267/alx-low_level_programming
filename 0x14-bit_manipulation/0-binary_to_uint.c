#include "main.h"

/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * b is NULL
 * any char in b is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	int len;

	num = 0;
	len = 0;

	if (b[len] == '\0')
	{
		return (0);
	}

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
