#include <stddef.h>

#include "search.h"
#include "../utils/utils.h"

int linear_search(int array[], size_t array_size, int target) {
    /* check if array sorted, cause we can use search only on
       sorted array */ 
    if (!is_sorted(array, array_size)) {
        return -1;
    }
    
    // iterate through array
    for (int i = 0; i < array_size; ++i){
        // we found it
        if (array[i] == target) {
            return i;
        }

        // in sorted array we can't get here if target inside
        if (array[i] > target) {
            return -1;
        }
    }
    return -1;
}

int binary_search(int array[], size_t array_size, int target) {
    /* check if array sorted, cause we can use search only on
       sorted array */ 
    if (!is_sorted(array, array_size)) {
        return -1;
    }

    // edge case when array is only one element
    if (array_size == 1) {
        return (array[0] == target) - 1;
    }

    // two pointers and to check numbers
    int l = 0;
    int r = array_size - 1;

    // new position to move one of our pointers
    int mid;

    while (l < r) {
        // we found it
        if (array[l] == target) {
            return l;
        } else if (array[r] == target) {
            return r;
        }

        // new position to move pointers
        mid = (l + r) / 2;

        // our target on the right from current middle
        if (array[mid] < target) {
            l = mid+1;
        } else {
            // or on the left
            r = mid;
        }
    }

    // we haven't found it
    return -1;
}