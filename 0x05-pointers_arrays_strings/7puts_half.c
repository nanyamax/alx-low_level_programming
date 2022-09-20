#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: pointer
 * Return: Always 0
 */
void puts_half(char *str)
{
	int l, i;

	l = _strlen(str) - 1;

	i = (l / 2) + 1;

	while (i <= l)
	{
		_putchar(str[i]);
		i++;
	}
        _putchar('\n');
}
