#include "main.h"
#include "dog.h"

/**
 * init_void - a function that initializes a variable
 * of type struct dog
 * @d: given pointer to structure
 * @name: given arguments or fields
 * @age: given arguments or fields
 * @owner: given arguments or fields;
 *
 * Return: nothing
 */
void init_void(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		
		d->age = age;

		d->owner = owner;
	}
}
