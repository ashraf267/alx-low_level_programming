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
			_putchar(44);
			_putchar(32);
		}
		_putchar((n) + 48);
		_putchar('\n');
	} else
	{
		while(n < 98)
		{
			_putchar((n++) + 48);
			_putchar(44);
			_putchar(32);
		}
		_putchar((n) + 48);
		_putchar('\n');
	}
}
