#include <stdio.h>
/* More headers can be added here */

/**
 * main - Prints all alphabets in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char myChars = 97;

	while (myChars <= 122)
	{
		putchar(myChars);
		myChars++;
	}
	putchar('\n');
	return (0);
}
