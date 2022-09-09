#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lowercase but omits q and e
 * Return: 0 on success.
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar(10);
	return (0);
}

