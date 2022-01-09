#include "AlgoArray.h"
#include "DynArray.h"
#include <cstddef>
#include <iostream>
#include <math.h>

double mean(DynamicArray &dynamic_array)
{
    return sum(dynamic_array) / dynamic_array.m_length;
}

double median(DynamicArray &dynamic_array)
{
    double median_value = 0.0;

    // prüfe ob ungerade oder gerade anzahl values im array
    bool is_uneven = dynamic_array.m_length % 2;

    // 1, 2, 3, 4, 5 => 3
    // 1, 2, 3, 4

    if (is_uneven)
    {
        median_value = dynamic_array.m_data[(int)dynamic_array.m_length / 2];
    }
    else
    {
        median_value = (dynamic_array.m_data[(int)dynamic_array.m_length / 2] + dynamic_array.m_data[((int)dynamic_array.m_length / 2) - 1]) / 2;
    }

    return median_value;
}

double sum(DynamicArray &dynamic_array)
{
    double sum_value = 0.0;

    for (size_t i = 0; i < dynamic_array.m_length; i++)
    {
        sum_value += dynamic_array.m_data[i];
    }
    return sum_value;
}

double variance(DynamicArray &dynamic_array)
{
    double mean_value = mean(dynamic_array);
    double variance = 0.0;

    for (size_t i = 0; i < dynamic_array.m_length; i++)
    {
        variance += pow((dynamic_array.m_data[i] - mean_value), 2.0);
    }

    return variance / dynamic_array.m_length;
}

double stddev(DynamicArray &dynamic_array)
{
    double variance_value = variance(dynamic_array);
    double stddev_value = sqrt(variance_value);

    return stddev_value;
}