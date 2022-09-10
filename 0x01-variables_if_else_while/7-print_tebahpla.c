#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lowercase in reverse followed by new line
 * Return: 0 on success
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}

