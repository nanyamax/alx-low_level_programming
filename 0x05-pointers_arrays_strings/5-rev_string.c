#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 * Return: reversed string
 */
void rev_string(char *s)
{
	char *s_copy;
	int i, j;

	s_copy = (char *) malloc(strlen(s) + 1);
	j = 0;
	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		s_copy[i] = s[j];
		j++;
	}
	s_copy[strlen(s)] = '\0';
	strcpy(s, s_copy);
}
