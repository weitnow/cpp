
#include "DynArray.h"
#include <iostream>

DynamicArray create_dynamic_array(const double &value, const std::size_t &length)
{
    DynamicArray dynamic_array = {nullptr, 0};
    dynamic_array.m_length = length;
    dynamic_array.m_data = new double[length];

    for (std::size_t i = 0; i < length; i++)
    {
        dynamic_array.m_data[i] = value;
    }

    return dynamic_array;
}

// DynamicArray create_dynamic_array(const double &value, const std::size_t &length)
// {
//     DynamicArray *new_array = new DynamicArray;
//     new_array->m_data = new double[length];

//     for (size_t i = 0; i < length; i++)
//     {
//         new_array->m_data[i] = value;
//     }

//     return *new_array;
//}

void push_back(DynamicArray &dynamic_array, const int &value)
{
    double *temp = nullptr;
    temp = new double[dynamic_array.m_length + 1];

    for (std::size_t i = 0; i < dynamic_array.m_length; i++)
    {
        temp[i] = dynamic_array.m_data[i];
    }

    temp[dynamic_array.m_length] = value;

    delete[] dynamic_array.m_data;

    dynamic_array.m_data = temp;
    dynamic_array.m_length++;
}

void pop_back(DynamicArray &dynamic_array)
{

    double *temp = nullptr;
    temp = new double[dynamic_array.m_length - 1];

    for (std::size_t i = 0; i < dynamic_array.m_length - 1; i++)
    {
        temp[i] = dynamic_array.m_data[i];
    }

    delete[] dynamic_array.m_data;

    dynamic_array.m_data = temp;
    dynamic_array.m_length--;
}