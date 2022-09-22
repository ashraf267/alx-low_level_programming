include "main.h"

/**
 * string_toupper - changes all lowercase letters of a
 * string to uppercase
 * @str: the string to be changed
 *
 * Return: a pointer to the changes string
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
