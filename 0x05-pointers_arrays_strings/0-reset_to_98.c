#include "main.h"
/**
 * reset_to_98 - updates the value it points to 98
 * int *n - pointer with parameter of n
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int *n;

	*n = 98;

	_putchar("%p", *n);
	return (0);
}
