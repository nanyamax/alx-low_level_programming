#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lowercase alphabets
 * Return: 0 on success.
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}

