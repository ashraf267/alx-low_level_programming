#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98 \n
 * @n: The number to start counting from
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while(n > 98)
		{
			_putchar((n--) + 48);
			_putchar(', ');
		}
		_putchar((n) + 48);
		_putchar('\n');
	} else
	{
		while( < 98)
		{
			_putchar((n++) + 48);
			_putchar(', ');
		}
		_putchar((n) + 48);
		_putchar('\n');
	}
}
