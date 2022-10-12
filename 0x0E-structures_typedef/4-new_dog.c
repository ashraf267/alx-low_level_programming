#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char _strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - gets the length of a given string
 * @str: the given string
 *
 * Return: lenght of str
 */
int _strlen(char *str)
{
	int length;

	length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to dest
 */
char _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	i = 0;
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: given dog's name
 * @age: given dog's age
 * @owner: given owner of dog
 *
 * Return: newly created struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
	{
		return (NULL);
	}

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);

		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);

		return (NULL);
	}

	doggo->name = _strcpy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcpy(doggo->owner, owner);

	return (doggo);
}
