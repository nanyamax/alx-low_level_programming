#include "main.h"
/**
 * primeCheck - searches if a numbe is prime
 *
 * @i: the number to check
 * @j: the numbers we'll go through
 * Return: whether or not the number is a prime number
 */

int primeCheck(int i, int j)
{
	if (i <= 1 || i % j == 0)
		return (0);
	else if (i == j)
		return (1);
	else if (i > j)
		primeCheck(i, j + 1);

	return (1);
}

/**
 * is_prime_number - returns 1 if input is a prime number otherwise return 0
 *
 * @n: number
 * Return: 1 on success otherwise return 0
 */
int is_prime_number(int n)
{
	return (primeCheck(n, 2));
}
