#include "main.h"
/* Add extra headers here */

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: 0
 */
void print_square(int size)
{
	int size_x;

	size_x = size; // size assumed to be size_y

	int x, y;

	for (x = 0; x < size_x; x++)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}