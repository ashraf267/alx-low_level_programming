#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main -Assigns a random number to n and check
 * if it is greater than 0 (prints: is positive) or
 * if it is equal to 0 (prints: is zero) or
 * if it is less than 0 (prints: is negative)
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	/* n is positive */
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
	/* n is zero */
		printf("%d is zero\n", n);
	} else
	{
	/* n is negative */
		printf("%d is negative\n", n);
	}
	return (0);
}
