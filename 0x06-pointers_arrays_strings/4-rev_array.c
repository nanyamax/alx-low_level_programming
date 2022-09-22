#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: pointer to a
 * @n: number of elements of the array
 * Return: 0 on success
 */
void reverse_array(int *a, int n)
{
	int i;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		int temp = *(a + i);

		*(a + i) = *(a + n);
		*(a + n) = temp;
		n--;
	}
}
