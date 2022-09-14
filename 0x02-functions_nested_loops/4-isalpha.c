#include "main.h"
#include <ctype.h>
/* Add header files here */

/**
 * _isalpha - Checks for alphabetic character
 *
 * Return: If true, returns 1, else, returns 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	} else
	{
		return (0);
	}
}
