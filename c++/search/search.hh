#pragma once
#include "..\utils\utils.hh"

template <typename T, std::size_t N>
std::size_t linear_search(const std::array<T, N>& array, const T target) {
    for (std::size_t i{0}; i < N; ++i) {
        if (array[i] == target) {
            return i;
        }
    }
    return (std::size_t)-1;
}


template <typename T, std::size_t N>
std::size_t binary_search(const std::array<T, N>& array, const T target) {
    if (!is_sorted(array) || !in_bounds(array, target)) {
        return (std::size_t)-1;
    }

    std::size_t l{0}, r{N - 1};

    if (array[l] == target) {
        return l;
    } else if (array[r] == target) {
        return r;
    }
    
    std::size_t mid;

    while (l <= r) {
        mid = (l + r) / 2;
        if (array[mid] < target) {
            l = mid + 1;
        } else if (array[mid] > target){
            r = mid - 1;
        } else {
            return mid;
        }
    }

    return (std::size_t)-1;
}