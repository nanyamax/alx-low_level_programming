#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: Width of grid
 * @height: height of grid
 *
 * Return: NULL on failure, NULL if @width or @height is 0 or negative,
 * on success: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **d;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	d = malloc(sizeof(int *) * height);
	if (d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		d[i] = malloc(sizeof(int) * width);
		if (d[i] == NULL)
		{
			while (i >= 0)
			{
				free(d[i]);
				i--;
			}
			free(d);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			d[j][k] = 0;
	}
	return (d);
}
