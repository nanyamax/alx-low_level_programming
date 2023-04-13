#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */

int jump_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    int step = sqrt(size);
    int prev = 0;

    while (array[step - 1] < value) {
        prev = step;
        step += sqrt(size);

        if (prev >= size) {
            return -1;
        }
    }

    while (array[prev] < value) {
        prev++;

        if (prev == fmin(step, size)) {
            return -1;
        }
    }

    if (array[prev] == value) {
        printf("%d\n", value);
        return prev;
    }

    return -1;
}

