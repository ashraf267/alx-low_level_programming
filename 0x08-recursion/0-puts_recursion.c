#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_pus_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
