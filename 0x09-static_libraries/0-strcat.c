#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len, j;

	len = j = 0;
	while (*(dest + len))
		len++;
	while ((*(dest + len) = *(src + j)))
	{
		len++;
		j++;
	}
	return (dest);
}
