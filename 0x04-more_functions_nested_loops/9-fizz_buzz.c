#include "main.h"
#include <stdio.h>
/* Extra headers can come here */

/**
 * main - prints the numbers from 1 to 100
 * the Fizz-Buzz test
 *
 * Return: 0
 */
int main(void)
{
	void print(int n);

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
			continue;
		} else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
			continue;
		} else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
			continue;
		}
		print(i);
	}
}

/* Custom print() function */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print(n / 10);
	}

	_putchar((n % 10) + '0');
}
