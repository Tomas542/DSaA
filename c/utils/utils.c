#include <stddef.h>
#include <stdbool.h>

#include "utils.h"


int find_min_val(const int array[], const size_t array_size) {
    int min_val = array[0];

    for (int i = 1; i < array_size; ++i) {
        if (min_val > array[i]) {
            min_val = array[i];
        }
    }
    return min_val;
}


size_t find_min_idx(const int array[], const size_t array_size) {
    int min_val = find_min_val(array, array_size);
    
    for (size_t i = 0; i < array_size; ++i) {
        if (array[i] == min_val) {
            return i;
        }
    }

    // unrealistic, there is a bug in find_min_val than
    return (size_t)-1;
}


int find_max_val(const int array[], const size_t array_size) {
    int max_val = array[0];

    for (int i = 1; i < array_size; ++i) {
        if (max_val < array[i]) {
            max_val = array[i];
        }
    }
    return max_val;
}


size_t find_max_idx(const int array[], const size_t array_size) {
    int max_val = find_max_val(array, array_size);
    
    for (size_t i = 0; i < array_size; ++i) {
        if (array[i] == max_val) {
            return i;
        }
    }

    // unrealistic, there is a bug in find_max_val than
    return (size_t)-1;
}


bool is_sorted(const int array[], const size_t array_size) {
    for (int i = 0; i < array_size - 1; ++i) {
        if (array[i] > array[i+1]) {
            return false;
        }
    }
    
    return true;
}


bool in_bounds(const int array[], const size_t array_size, const int target) {
    return ((array[0] <= target) && (target <= array[array_size-1]));
}