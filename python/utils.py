def is_sorted(array: list[int]) -> bool:
    return all(array[i] <= array[i+1] for i in range(len(array)-1))

def in_bounds(array: list[int], target: int) -> bool:
    return array[0] <= target <= array[-1]