#include "main.h"
/* Add necessary headers here */

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char myChars;

	for (myChars = 97; myChars <= 122; myChars++)
	{
		_putchar(myChars);
	}
	_putchar('\n');

	return (0);
}
