#include <stddef.h>

#include "search.h"
#include "../utils/utils.h"


size_t linear_search(const int array[], const size_t array_size, const int target) {   
    // iterate through array
    for (size_t i = 0; i < array_size; ++i){
        // we found it
        if (array[i] == target) {
            return i;
        }
    }
    return (size_t)-1;
}


size_t binary_search(const int array[], const size_t array_size, const int target) {
    /* check if array sorted, cause we can use search only on
       sorted array */ 
    if (!is_sorted(array, array_size)) {
        return (size_t)-1;
    }

    // if target in bounds of sorted array
    if (!in_bounds(array, array_size, target)) {
        return (size_t)-1;
    }

    // two pointers and to check numbers
    size_t l = 0;
    size_t r = array_size - 1;

    if (array[l] == target) {
        return l;
    } else if (array[r] == target) {
        return r;
    }
    
    // new position to move one of our pointers
    size_t mid;

    while (l <= r) {
        // new position to move pointers
        mid = (l + r) / 2;

        // our target on the right from current middle
        if (array[mid] < target) {
            l = mid+1;
        } else if (array[mid] > target){
            // or on the left
            r = mid-1;
        } else {
            return mid;
        }
    }

    // we haven't found it
    return (size_t)-1;
}