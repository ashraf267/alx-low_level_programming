#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: given array of integers
 * @n: number of array elements
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int tmp;

	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
