#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 *
 * Return: if uppercase, return 1
 * else, return 0
 */
int _isupper(int c)
{
	int output;

	if (isupper(c))
	{
		output = 1;
	} else
	{
		output = 0;
	}
	return (output);
}
