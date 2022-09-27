#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy from src
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	unsigned char *destination = dest;
	
	const unsigned char *source = src;
	
	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}
	return (dest);
}
