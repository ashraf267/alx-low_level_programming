#include <stdio.h>

/**
 * main - prints the name of a file it was compiled from,
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
