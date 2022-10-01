#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: on success, 0
 * on error, 1, if arguments are less than 2
 */
int main(int argc, char *argv[])
{
	int i;

	int j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	} else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		{
			j *= atoi(argv[i]);

			printf("%d\n", j);
		}
	}
	return (0);
}
