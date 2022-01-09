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

//get rid of this typedef
typedef vector<vector<double>> Matrix;

// In eurem Programm bitte:
// your_main zu main ändern
int your_main()
{
    // Aufgabe 1
    Matrix matrix{};

    for (size_t i = 0; i < matrix.size(); i++)
    {
        for (size_t j = 0; j < matrix[i].size(); j++)
        {
            matrix[i][j] = i + j;
        }
    }

    // Aufgabe 2
    vector<double>
        row_max_vec = max_row_values(matrix);

    for (int i = 0; i != row_max_vec.size(); ++i)
    {
        cout << "Maximum of row " << i << " = " << row_max_vec[i] << endl;
    }

    // Aufgabe 3
    double temp = row_max_vec[2];
    row_max_vec[2] = row_max_vec[1];
    row_max_vec[1] = temp;

    for (int i = 0; i != row_max_vec.size(); ++i)
    {
        cout << "Vector[" << i << "] = " << row_max_vec[i] << endl;
    }

    double max = sort_and_max(row_max_vec);

    for (int i = 0; i != row_max_vec.size(); ++i)
    {
        cout << "Sorted vector[" << i << "] = " << row_max_vec[i] << endl;
    }

    cout << "Vector max: " << max << endl;

    return 0;
}