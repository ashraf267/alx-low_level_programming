#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9
 * without 2 and 4, followed by a new line
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue; /* Skip 2 and 4 */
		}
		_putchar(i);
	}
	_putchar('\n');
}
