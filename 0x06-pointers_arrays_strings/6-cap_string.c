#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 *
 * @str: string pointer
 * Return: corresponding uppercase of the changed lowercase
 */
char *cap_string(char *str)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	while (i = 0; str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;

		while (j = 0; j < 13)
		{
			if (str[i] == spe[j])
			{
				if (str[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
			j++;
		}
	}
	return (str);
}
