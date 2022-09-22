#include "main.h"

/**
 * string_toupper - changes all lowercase of str to uppercase
 * @str: given string to be changed
 *
 * Return: the modified string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
