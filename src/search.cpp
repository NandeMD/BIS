#ifndef SEARCH
#include "search.hpp"
#endif

usize b_src_on_array(uint *arr, usize n, uint element, usize upper_bound) {
    usize left = 0;
    usize right = upper_bound;

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
