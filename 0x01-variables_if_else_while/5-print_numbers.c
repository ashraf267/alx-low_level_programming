#include <stdio.h>
/* More headers can be added here */

/**
  * main - Prints all numbers less than 10, starting from 0
  *
  * Return: Always 0
  */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
