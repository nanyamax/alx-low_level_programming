#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_subarray - Prints the subarray being searched.
 * @array: A pointer to the first element of the array.
 * @left: The left boundary of the subarray.
 * @right: The right boundary of the subarray.
 */
void print_subarray(int *array, size_t left, size_t right)
{
    size_t i;

    printf("Searching in array: ");
    for (i = left; i < right; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);
}

/**
 * binary_search_recursive - Searches for a value in a sorted array
 *                           of integers using binary search recursively.
 * @array: A pointer to the first element of the array to search.
 * @left: The left boundary of the subarray to search.
 * @right: The right boundary of the subarray to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (array == NULL || left > right)
        return (-1);

    print_subarray(array, left, right);

    mid = left + (right - left) / 2;

    if (array[mid] == value)
        return (mid);

    if (array[mid] > value)
        return (binary_search_recursive(array, left, mid - 1, value));

    return (binary_search_recursive(array, mid + 1, right, value));
}

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return (binary_search_recursive(array, 0, size - 1, value));
}

