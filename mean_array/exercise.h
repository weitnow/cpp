#pragma once

namespace computation
{

    double mean_array_value(int *array, const unsigned int &length);
    double mean_array_value(double *array, const unsigned int &length);

    struct Dataset
    {
        double mean_array_a;
        double mean_array_b;
    };

} // namespace computation