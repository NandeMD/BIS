#include <iostream>

#include "printer.hpp"

void print_arr(uint *arr, usize n, std::string name) {
    std::cout << name << " = { ";

    for (usize i = 0; i < n; ++i) {
        std::cout << arr[i];

        if (i != n - 1) {
            std::cout << ", ";
        }
    }

    std::cout << " }" << std::endl;
}
