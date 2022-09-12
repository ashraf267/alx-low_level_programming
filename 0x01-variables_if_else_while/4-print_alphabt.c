#include <stdio.h>
/* More headers can be added here */

/**
 * main - Prints all alphabets except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char twentyFourLetters = 97;

	while (twentyFourLetters <= 122)
	{
		putchar(twentyFourLetters);
		twentyFourLetters++;
		if (twentyFourLetters == 113 || twentyFourLetters == 101)
		{
		continue;
		}
	}
	return (0);
}
