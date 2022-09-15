#include "main.h"
#include <ctype.h>
/* Add header files here */

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The input to be checked
 *
 * Return: if true, returns 1, else, returns 0
 */
int _isdigit(int c)
{
	int output;

	if (isdigit(c))
	{
		output = 1;
	} else
	{
		output = 0;
	}
  return (output);
}
