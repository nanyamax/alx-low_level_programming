#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function allocates memory for an array of nmemb
 * @nmemb: number of elements
 * @size: size of that element type
 *
 * Return: NULL if nmemb or size is 0, NULL if malloc fails and
 * a pointer to the allocated memory on success.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ctn;

	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ctn = malloc(size * nmemb);
	if (ctn == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ctn[i] = 0;

	return (ctn);
}
