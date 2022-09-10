#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing combination of single digit numbers
 * Return: 0 on success
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44); /* ascii comma */
		putchar(32); /* ascii space */
		i++;
	}
	putchar(10);
	return (0);
}

