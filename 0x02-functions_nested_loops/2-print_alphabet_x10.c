#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase \n
 *
 * Return: print_alphabet_x10 has a void keyword
 */
void print_alphabet_x10(void)
{
	int parent_loop;

	char child_loop;

	for (parent_loop = 1; parent_loop <= 10; parent_loop++)
	{
		for (child_loop = 97; child_loop <= 122; child_loop++)
		{
			_putchar(child_loop);
		}
		_putchar('\n');
	}
	/* _putchar('\n'); */
}
