#include "main.h"
#include "dog.h"

/**
 * init_void -
 * @d:
 * @name:
 * @age:
 * @owner:
 *
 * Return: nothing
 */
void init_void(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	d = &my_dog;

	d->name = name;

	d->age = age;

	d->owner = owner;
}
