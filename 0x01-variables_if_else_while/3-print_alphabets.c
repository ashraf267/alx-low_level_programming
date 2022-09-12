#include <stdio.h>
/* More headers can be added here */

/**
 * main - Prints all alphabets in lowercase first, followed by uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char charsLowercase = 97; /* ends at 122 */
	char charsUppercase = 65; /* ends at 90 */

	/* Starts printing lowercase alphabets */
	while (charsLowercase <= 122)
	{
		putchar(charsLowercase);
		charsLowercase++;
	}

	/* Continue with uppercase alphabets */
	while (charsUppercase <= 90)
	{
		putchar(charsUppercase);
		charsUppercase++;
	}
	putchar('\n');
	return (0);
}
