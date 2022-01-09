#include <algorithm>
#include <iostream>
#include <vector>

#include "exercise.h"

using std::cin;
using std::cout;
using std::endl;
using std::fill;
using std::sort;
using std::vector;

//delete this typedef
typedef vector<vector<double>> Matrix;

/*
[[0][1][2]],
[[1][2][3]],
[[2][3][4]],
*/

// Aufgabe 2
vector<double> max_row_values(Matrix &matrix)
{
    vector<double> newVector(matrix.size(), 0);
    for (size_t i = 0; i < matrix.size(); i++)
    {
        double max = 0;
        for (size_t j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] > max)
                max = matrix[i][j];
        }
        newVector[i] = max;
    }

    return newVector;
}

// Aufgabe 3
double sort_and_max(vector<double> &vec)
{
    std::sort(vec.begin(), vec.end());

    return vec[-1];
}