#include <stdio.h>
#include "search_algos.h"
int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    int low = 0;
    int high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        printf("%d\n", array[pos]);

        if (array[pos] == value) {
            return pos;
        }

        if (array[pos] < value) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1;
}

