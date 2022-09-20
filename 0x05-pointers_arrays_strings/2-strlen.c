#include "main.h"
#include <string.h>
/* Add extra headers here */

/**
 * _strlen - returns the length of a string
 * @s: given string
 *
 * Return: lenght of the given string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++ /* increment len by 1 */
	}
	return (len);
}
