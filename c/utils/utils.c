#include <stddef.h>
#include <stdbool.h>

#include "utils.h"

int find_min(int array[], size_t array_size) {
    int min_val = array[0];

    for (int i = 1; i < array_size; ++i) {
        if (min_val > array[i]) {
            min_val = array[i];
        }
    }
    return min_val;
}

int find_max(int array[], size_t array_size) {
    int max_val = array[0];

    for (int i = 1; i < array_size; ++i) {
        if (max_val < array[i]) {
            max_val = array[i];
        }
    }
    return max_val;
}

bool is_sorted(int array[], size_t array_size) {
    for (int i = 0; i < array_size - 1; ++i) {
        if (array[i] > array[i+1]) {
            return false;
        }
    }
    
    return true;
}

bool in_bounds(int array[], size_t array_size, int target) {
    return ((array[0] <= target) && (target <= array[array_size-1]));
}