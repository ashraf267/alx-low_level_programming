#include "main.h"
#include <ctype.h>
/* Add header files here */

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked if alphabetic or not
 *
 * Return: If true, returns 1, else, returns 0
 */
int _isalpha(int c)
{
	int output;
	
	if (isalpha(c))
	{
		output = 1;
	} else
	{
		output = 0;
	}
	return (output);
}
