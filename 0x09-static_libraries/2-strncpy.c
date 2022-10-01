#include "main.h"

/**
 * *_strncpy - copies a string but uses n bytes from src
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: bytes of n
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && *(src + j))
	{
		*(dest + j) = *(src + j);
		j++;
	}
	while (j < n)
	{
		*(dest + j) = '\0';
		j++;
	}
	return (dest);
}
