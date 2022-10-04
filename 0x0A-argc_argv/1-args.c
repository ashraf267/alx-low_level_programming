#include "main.h"
#include <stdio.h>

/**
 * main - prints the no of arguments
 * passed into it
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
