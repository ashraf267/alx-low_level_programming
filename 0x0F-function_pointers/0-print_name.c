#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: given name to print
 * @f: pointer to a function that prints a name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
