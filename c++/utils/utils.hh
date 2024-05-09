#pragma once
#include <array>


template <typename T, std::size_t N>
bool is_sorted(const std::array<T, N>& array) {
    for (std::size_t i{1}; i < N; ++i) {
        if (array[i - 1] > array[i]) {
            return false;
        }
    }
    return true;
}


template <typename T, std::size_t N>
bool in_bounds(const std::array<T, N>& array, const T target) {
    return (array[0] <= target) && (target <= array[N-1]);
}