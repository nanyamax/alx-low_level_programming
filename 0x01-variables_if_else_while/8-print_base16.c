#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers of base 16 in lowercase
 * Return: 0 on success
 */
int main(void)
{
	int n, a;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	a = 97;
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}

