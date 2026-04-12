#ifndef SEARCH
#include "search.hpp"
#endif

uintptr_t b_src_on_array(int64_t *arr, uintptr_t n, int64_t element, uintptr_t upper_bound) {
    uintptr_t left = 0;
    uintptr_t right = upper_bound;

    // Out of bounds check
    if (upper_bound >= n) {
        throw "Upper bound is out of bounds of the array.";
    }

    while (left != right) {
        auto mid = (left + right) / 2;
        if (arr[mid] < element) { // If the searched element is bigger than the middle
            left = mid + 1;       // then ignore the left half and search on the right half
        } else {
            right = mid;          // Else ignore the right half and search on the left half
        }
    }

    // Loop terminated on left == right == N
    // which indicates if searched element is <= arr[N],
    // then it should sit on N (which means left side of it after shifting)
    // otherwise, it should sit on N + 1 (which means right side of it after shifting)
    if (element <= arr[left]) {
        return left;
    } else {
        return left + 1;
    }
}
