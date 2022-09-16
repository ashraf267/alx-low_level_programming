#include "main.h"
/* Add extra headers here */

/**
 * print_line - draws a staright line in the terminal n number
 * of times
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
