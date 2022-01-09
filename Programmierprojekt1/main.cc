#include "AlgoArray.h"
#include "DynArray.h"
#include <cstddef>
#include <iostream>

int main()
{
    double fill_value = 0.0;
    size_t length = 5;
    DynamicArray my_array = create_dynamic_array(fill_value, length);

    // for (size_t i = 0; i < length; i++)
    // {
    //     std::cout << my_array.m_data[i] << std::endl;
    // }

    my_array.m_data[0] = 0;
    my_array.m_data[1] = 1;
    my_array.m_data[2] = 2;
    my_array.m_data[3] = 3;
    my_array.m_data[4] = 4;

    std::cout << variance(my_array) << std::endl;
    std::cout << stddev(my_array) << std::endl;

    return 0;
}