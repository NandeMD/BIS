#define SEARCH

#include <cstdint>

#define usize std::uintptr_t
#define uint std::int32_t

usize b_src_on_array(uint *arr, usize n, uint element, usize upper_bound);
