#include "main.h"
/**
 * helper - finds the square root of two numbers
 *
 * @i: the number
 * @j: the number to the test for the square root of @i
 * Return: square root
 */
int helper(int i, int j)
{
	if (j * j > i)
		return (-1);
	else if (j * j == i)
		return (j);
	else
		return (helper(i, j + 1));

	return (1);
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n:number
 * Return: -1 if @n does not have a natural sqrt and sqrt of @n on success
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
