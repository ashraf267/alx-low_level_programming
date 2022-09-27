#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: given input char pointer
 * @b: given input char
 * @n: given input int
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	unsigned char *mem = s;
	
	unsigned char val = c;
	
	for (i = 0; i < n; i++)
	{
		mem[i] = val;
	}
	return (mem);
}
