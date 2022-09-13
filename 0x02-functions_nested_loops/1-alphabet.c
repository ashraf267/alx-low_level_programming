#include "main.h"
/* Add necessary headers here */

/**
 * main - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char myChars;

	for (myChars = 97; myChars <= 122; myChars++)
	{
		_putchar(myChars);
	}
	_putchar('\n');

	return (0);
}
