#include "main.h"

/**
 * _strcpy - copy copy function :)
 * @dest: copy to
 * @src: copy from
 *
 * Return: pointer to the dest string
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
