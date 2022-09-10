#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the lowest value of the combination of two digits
 * Return: 0 on success
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 < 57; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == 56 && num2 == 57)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
