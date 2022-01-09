#include <iostream>

int array_maximum(int input_array[], unsigned int length)
{
    int highest_number = 0;

    for (unsigned int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            highest_number = input_array[i];
        }

        if (input_array[i] > highest_number)
        {
            highest_number = input_array[i];
        }
    }

    return highest_number;
}

int main()
{
    unsigned int array_size = 10;

    int *p = new int[array_size];

    std::cout << sizeof(p) << std::endl;
    std::cout << sizeof(*p) << std::endl;

    for (int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }

    std::cout << array_maximum(p, array_size);

    delete[] p;

    return 0;
}