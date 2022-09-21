#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: the given input
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	int len;

	i = 0;
	len = 0;
	while (str[i])
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
