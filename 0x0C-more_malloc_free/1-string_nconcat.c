#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 *
 * @s1: first string
 * @s2: second string
 * @n: integer bytes
 * Return: Null if allocation fails and
 * newly allocated space in memory on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ctn;

	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;
	unsigned int l;
	unsigned int m = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	len = i + j;

	ctn = malloc(sizeof(char) * (len + 1));
	if (ctn == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		ctn[m++] = s1[l];
	for (k = 0; k < j; k++)
		ctn[m++] = s2[k];

	ctn[m] = '\0';
	return (ctn);
}
