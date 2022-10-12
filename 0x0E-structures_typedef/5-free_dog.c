#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a functions that frees dogs
 * @d: dogs to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
	free(d);
}
