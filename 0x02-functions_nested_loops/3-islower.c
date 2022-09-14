#include "main.h"
#include <ctype.h>
/* Add extra header files here */

/**
 * isLower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: If lowercase, return 1, else, return 0
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
