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

    while (left <= right) {
        usize center = (left + right) / 2;

        if (arr[center] > element) {
            if (center == 0)
                return 0;

            right = center - 1;
        } else {
            left = center + 1;
        }
    }

    return left;
}
