#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * the Fizz-Buzz test
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
			continue;
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
}
