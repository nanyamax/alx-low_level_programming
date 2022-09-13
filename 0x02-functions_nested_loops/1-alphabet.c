#include "main.h"

/**
 * main - entry point
 *
 * Description: print_alphabet in lower case
 * Return: 0 on success
 */
void print_alphabet(void);
{
	char a = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(a);
		a++;
	}
		_putchar('\n');
		return (0);
}

