#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse and followed by a new line
 * @s: the given input to be reversed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}
	putchar('\n');
}
