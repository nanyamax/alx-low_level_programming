#include "main.h"
/**
 * *string_toupper - changes lowercase to uppercase
 *
 * @str: string pointer
 * Return: corresponding uppercase of the changed lowercase 
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
