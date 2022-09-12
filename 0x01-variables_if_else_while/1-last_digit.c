#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/**
 * main - Assigns a random number to variable n and check
 * if the last digit of n is greater than five
 * if the last digit of n is equal to zero
 * if the last digit of n is less than six and not zero
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit_of_n = n;
	last_digit_of_n = last_digit_of_n % 10;
	if (last_digit_of_n > 5)
	{
	/* greater than 5 */
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit_of_n);
	} else if (last_digit_of_n == 0)
	{
	/* equal to 0 */
		printf("Last digit of %d is %d and is 0\n", n, last_digit_of_n);
	} else
	{
	/* less than 6 and not 0 */
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit_of_n);
	}
	return (0);
}
