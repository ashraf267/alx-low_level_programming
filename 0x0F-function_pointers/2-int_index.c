#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: given array
 * @size: number of elements in the guven array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: If no element matches or size <= 0, return -1
 * Else, return the index of the element for which the cmp function
 * does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
