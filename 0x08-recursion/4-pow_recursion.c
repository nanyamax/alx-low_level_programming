#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: integer to be raised
 * @y: integer power
 * Return: -1 if y is lesser than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0 || y == 1)
		return (1);

		return (x * (_pow_recursion(x, y - 1)));
}

