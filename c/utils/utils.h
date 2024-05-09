#pragma once
#include <stddef.h>
#include <stdbool.h>

int find_min_val(const int array[], const size_t array_size);

size_t find_min_idx(const int array[], const size_t array_size);

int find_max_val(const int array[], const size_t array_size);

size_t find_max_idx(const int array[], const size_t array_size);

bool is_sorted(const int array[], const size_t array_size);

bool in_bounds(const int array[], const size_t array_size, const int target);