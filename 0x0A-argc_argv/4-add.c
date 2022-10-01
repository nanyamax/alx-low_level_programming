#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive integers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum = 0, count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			if (*argv[count] == '0' || atoi(argv[count]) > 0)
			{
				sum += atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
