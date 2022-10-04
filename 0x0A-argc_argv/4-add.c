#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 1 if a non-integer is passed, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	int j;

	int add;

	int len;

	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
	} else
	{
		add = 0;

		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
