#include "main.h"
/* Add extra headers here */

/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 * followed by a new line
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i;

	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
