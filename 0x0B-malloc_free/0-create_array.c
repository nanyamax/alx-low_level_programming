#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of char and initializes it with a specific char
 *
 * @size: size of array to be created
 * @c: char to initialize the array with
 * Return: pointer to the array or Null if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *n;

	if (size == 0)
		return (Null);
	n = malloc(size * sizeof(char));
	if (n == Null)
	{
		return (Null);
	}
	for (m == 0; m < size; m++)
	{
		n[m] = c;
	}
	return (n);
}
