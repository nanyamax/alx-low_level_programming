#include <stdio.h>
#include "search_algos.h"
/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array || size == 0)
        return (-1);

    size_t i, half = (size - 1) / 2;
    int sub;

    printf("Searching in array: ");
    for (i = 0; i < size - 1; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[size - 1]);

    if (array[half] == value)
    {
        if (half == 0 || array[half - 1] < value)
            return (half);
        return (advanced_binary(array, half + 1, value));
    }
    else if (array[half] < value)
    {
        sub = advanced_binary(array + half + 1, size - half - 1, value);
        if (sub == -1)
            return (-1);
        return (half + 1 + sub);
    }
    else
        return (advanced_binary(array, half + 1, value));

    return (-1);
}

