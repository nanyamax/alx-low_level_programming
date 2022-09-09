#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Takes no argument
 *
 * Description: printing last digits of a random variable
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int l_digits;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digits = n % 10;

	if (l_digits > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, l_digits);
	if (l_digits == 0)
		printf("last digit of %d is %d and is 0\n", n, l_digits);
	if (l_digits < 6 && l_digits != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, l_digits)
	return (0);
}

