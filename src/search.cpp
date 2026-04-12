#ifndef SEARCH
#include "search.hpp"
#endif

uintptr_t b_src_on_array(int64_t *arr, uintptr_t n, int64_t element,
                         uintptr_t upper_bound) {
    uintptr_t left = 0;
    uintptr_t right = upper_bound;

    // Out of bounds check
    if (upper_bound >= n) {
        throw "Upper bound is out of bounds of the array.";
    }

    while (left != right) {
        auto mid = (left + right) / 2;
        if (arr[mid] < element) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    if (element <= arr[left]) {
        return left;
    } else {
        return left + 1;
    }
}
