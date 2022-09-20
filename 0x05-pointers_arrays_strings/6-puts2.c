#incude "main.h"
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

	l = _strlen(str);

	while (!flag && i < l)
	{
		if (str[i] != '\0')
		{
			putchar(str[i]);
			i += 2;
		}
		else
			flag = 1;
	}
	_putchar('\n');
}
