#include "main.h"
/**
 * _pow_recursion - returns the value of @x raised to the power of @y
 *
 * @x:number
 * @y: integer power to raise @x to
 * Return: -1 if y is lesser than 0 and the value of @x to the @y pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

		return (x * (_pow_recursion(x, y - 1)));
}

