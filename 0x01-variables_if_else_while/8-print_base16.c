#include <stdio.h>
/* More headers can be added here */

/**
 * main - Prints all numbers and letters (lowercase) of base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int n; /* n for numbers of base 16 */

	int l_l; /* l_l for lowercase letters of base 16 */

	n = 48;
	l_l = 97;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (l_l <= 102)
	{
		putchar(l_l);
		l_l++;
	}
	putchar('\n');
	return (0);
}
