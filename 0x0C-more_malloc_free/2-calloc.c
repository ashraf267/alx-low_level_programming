#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memeory for an array using malloc
 * @nmemb: number of array elements
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	char *filler;

	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}
	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
	{
		filler[i] = '\0';
	}
	return (mem);
}
