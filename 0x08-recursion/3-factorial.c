#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 *
 * Return: factorial of a given number
 */
int factorial(int n)
{
	int res = n; /* res: result */

	if (n < 0)
	{
		return (-1);
	} else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	res *= factorial(n - 1);

	return (res);
}
