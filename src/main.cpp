#include <iostream>

#include "printer.hpp"
#include "search.hpp"
#include "sort.hpp"

int main() {
    uint arr[] = {3, 8, 5, 4, 100};
    std::cout << "Before:" << std::endl;
    print_arr(arr, 5, std::string("arr"));

    binary_insertion_sort(arr, 5);
    std::cout << std::endl << "After:" << std::endl;
    print_arr(arr, 5, std::string("arr"));

    return 0;
}
