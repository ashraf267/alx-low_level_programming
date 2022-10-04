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
	int x;

	int y;

	int ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	ans = x * y;

	printf("%d\n", ans);

	return (0);
}
