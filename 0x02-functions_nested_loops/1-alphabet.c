#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: a function to print all lowercase alphabets
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
		_putchar('\n');
}

