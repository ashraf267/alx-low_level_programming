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
	int x;
	
	int y;
	
	for (x = 0; x < size; x++)
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
