#include "exercise.h"
#include <iostream>

int main()
{

    // Exercise 1
    const unsigned int array_elements = 5;
    int array_a[array_elements] = {1, 2, 3, 4, 5};
    double array_b[array_elements] = {1.0, 2.5, 3.5, 4.5, 10.0};

    double mean_array_a = computation::mean_array_value(array_a, array_elements);
    double mean_array_b = computation::mean_array_value(array_b, array_elements);

    std::cout << "Mean Array A: " << mean_array_a << std::endl;
    std::cout << "Mean Array B: " << mean_array_b << std::endl;

    // Exercise 2

    computation::Dataset data{mean_array_a, mean_array_b};
    std::cout << data.mean_array_a << std::endl;
    std::cout << data.mean_array_b << std::endl;

    return 0;
}