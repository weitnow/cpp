#pragma once
#include <cstddef>

/**
 * @brief DynamicArray Structure.
 *
 * @param double* m_data
 * @param std::size_t m_length
 */
struct DynamicArray
{
    double *m_data;
    std::size_t m_length;
};

/**
 * @brief Create a dynamic array object
 *
 * @param value the fill value for the array.
 * @param length the length of the array.
 * @return DynamicArray
 */
DynamicArray create_dynamic_array(const double &value, const std::size_t &length);

/**
 * @brief Push backs the "value" at the end of the array.
 *
 * @param dynamic_array the dynamic array
 * @param value The value to append to the array.
 */
void push_back(DynamicArray &dynamic_array, const int &value);

/**
 * @brief Pop backs the value at the end of the array.
 *
 * @param dynamic_array the dynamic array
 *
 */
void pop_back(DynamicArray &dynamic_array);
