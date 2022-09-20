#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 * Return: reversed string
 */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, *temp;

	length = strlen(s);
	begin = s;
	end = s;

	for (c = 0; c < length - 1; c++)
	end++;

	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
			end--;
	}
}
