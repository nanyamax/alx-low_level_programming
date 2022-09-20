#include "main.h"
#include <string.h>
/**
 * puts2 - prints every character of a string
 * @str: pointer
 * Return: Always 0
 */
void puts2(char *str)
{
	int i, l, flag;

	i = 0;
	flag = 0;

	for (l = 0; str[l] != '\n'; l++);

	while (!flag && i < l + 1)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
			i += 2;
		}
		else
			flag = 1;
	}
	_putchar('\n');
}
