#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the input to be checked
 *
 * Return: if true, returns 1
 * else, returns 0
 */
int _isdigit(int c)
{
	int output;

	if(isdigit(c))
	{
		output = 1;
	} else
	{
		output = 0;
	}
	return (output);
}
