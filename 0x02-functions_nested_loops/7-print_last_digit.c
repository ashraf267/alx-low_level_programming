#include "main.h"

/**
 * print_last_digit: Prints the last digit of a number
 * @n: The number input as an argument
 *
 * Return: Returns the last digit of the given number
 */
int print_last_digit(int n)
{
	int last_digit;
	
	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + 48);
	return (last_digit);
}
