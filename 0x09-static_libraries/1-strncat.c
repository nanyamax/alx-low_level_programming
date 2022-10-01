#include "main.h"

/**
 * *_strncat - concatenates two strings but uses the n bytes frm src
 * @dest: pointer with destination variable
 * @src: pointer with source variable
 * @n: bytes from source
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int j;

	dest_len = j = 0;
	while (*(dest + dest_len))
		dest_len++;
	while (j < n && *(src + j))
	{
		*(dest + dest_len) = *(src + j);
		dest_len++;
		j++;
	}
	if (j < n)
		*(dest + dest_len) = *(src + j);
	return (dest);
}
