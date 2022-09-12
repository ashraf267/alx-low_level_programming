#include <stdio.h>
/* More headers can be added here */

/**
 * main - Same as 2-print_alphabet, but in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	ch = 122;
	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
