#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints lowercase and uppercase
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	i = 65;
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}

