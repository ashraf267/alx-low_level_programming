#include "main.h"

/**
 * print_sign: Prints the sign of a number
 *
 * @n: The number to be checked
 * Return: If condition is true, return 1 and print +,
 * else if, return 0 and print 0,
 * else, return -1 and print -
 */
int print_sign(int n)
{
	int output;

	if (n > 0)
	{
		output = 1;
		_putchar('+');
	} else if (n == 0)
	{
		output = 0;
		_putchar(48);
	} else
	{
		output = -1;
		_putchar('-');
	}
	return (output);
}
