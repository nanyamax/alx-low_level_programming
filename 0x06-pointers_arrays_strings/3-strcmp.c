#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: pointer to variable s1
 * @s2: pointer to variable s2
 * Return: 0,< 0, >0.
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*(s1 + res) && *(s2 + res) && (*(s1 + res) == *(s2 + res)))
		res++;
	return (*(s1 + res) - *(s2 + res));
}
