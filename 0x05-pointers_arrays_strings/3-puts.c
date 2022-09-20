#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string followed by a new line, to stdout
 * @str: the given input
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
