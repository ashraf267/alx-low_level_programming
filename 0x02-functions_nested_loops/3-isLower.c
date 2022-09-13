#include "main.h"
#include <ctype.h>

/**
 * isLower - Checks for lowercase character
 *
 * Return: Always 0
 */
int _isLower(int c)
{
	int output;

	if (isLower(c))
	{
		output = 1;
	} else
	{
		output = 0;
	}

	return (output);
}
