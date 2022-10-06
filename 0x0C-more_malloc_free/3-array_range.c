#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the lowest and first element in the array
 * @max: the highest and last element in the array
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;

	int i;

	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
