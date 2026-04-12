#include <iostream>

#include "printer.hpp"

void print_arr(int64_t *arr, uintptr_t n, std::string name) {
    std::cout << name << " = { ";

    for (uintptr_t i = 0; i < n; ++i) {
        std::cout << arr[i];

        if (i != n - 1) {
            std::cout << ", ";
        }
    }

    std::cout << " }" << std::endl;
}
