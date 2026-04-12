#ifndef SORT
#include "sort.hpp"
#endif

void binary_insertion_sort(int64_t *arr, uintptr_t n) {
    for (uintptr_t i = 1; i < n; ++i) {
        int64_t cursor = arr[i];

        uintptr_t needs_to_be_at = b_src_on_array(arr, i, cursor, i - 1);

        // Shift all elements before the cursor
        // to 1 place right, starting from the right
        // so we don't lose items
        for (uintptr_t j = i - 1; j >= needs_to_be_at; --j) {
            arr[j + 1] = arr[j];
        }

        // And finally place the pointed item
        // to it's rightful place
        arr[needs_to_be_at] = cursor;
    }
}
