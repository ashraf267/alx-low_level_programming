#include <stdio.h>
/* Extra header files can be added here */

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	x = 48;
	while (x <= 57)
	{
		if (x != 57)
		{
			putchar(x);
			putchar(44);
			putchar(32);
			x++;
		} else
		{
			putchar(x);
			x++;
		}
	}
	return (0);
}
