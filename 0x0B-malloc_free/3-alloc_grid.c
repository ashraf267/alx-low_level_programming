#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * of integers
 * @width: given width of the twoD array
 * @height: given height of the twoD array
 *
 * Return: NULL, on failure or if width or height = 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **twoD;

	int wtIndex;

	int htIndex;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
	{
		return (NULL);
	}

	for (htIndex = 0; htIndex < height; htIndex++)
	{
		twoD[htIndex] = malloc(sizeof(int) * width);

		if (twoD[htIndex] == NULL)
		{
			for (; htIndex >= 0; htIndex--)
			{
				free(twoD[htIndex]);
			}
			free(twoD);
			return (NULL);
		}
	}
	for (htIndex = 0; htIndex < height; htIndex++)
	{
		for (wtIndex = 0; wtIndex < width; wtIndex++)
		{
			twoD[htIndex][wtIndex] = 0;
		}
	}
	return (twoD);
}
