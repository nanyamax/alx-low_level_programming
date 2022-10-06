#include "main.h"
#include <stdlib.h>

/**
 *  array_range - creates an array of integers
 *
 *  @min: smaller integer in the array
 *  @max: largest integer in the array
 *  Return: the pointer to the newly created array, Null if min > max
 *  Null if malloc fails
 */
int *array_range(int min, int max)
{
	int *ctn;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	ctn = malloc(sizeof(int) * (max - min + 1));
	if (ctn == NULL)
		return (NULL);

	for (i = min, 1 <= max; i++)
	{
		ctn[j] = i;
		j++;
	}

	return (ctn);
}
