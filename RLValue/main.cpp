#include <iomanip>
#include <iostream>

namespace ad
{

}

// 1a. C++: static_cast<newDtype> - converts object from one type to another
// 1b. C: (newDtype)(varName)

int min(int array[]);

int main()
{

    double number = 3.14;
    std::cout << std::setprecision(30) << number << std::endl;

    int number2 = number;
    std::cout << std::setprecision(30) << number2 << std::endl;

    // C-Casting
    // (newDtype)(varName)

    float number3 = (float)(number);
    std::cout << std::setprecision(30) << number3 << std::endl;

    double number4 = (double)(number3);
    std::cout << std::setprecision(30) << number4 << std::endl;

    // C++ casting
    // static_cast<newDtype>

    float number5 = static_cast<float>(number);
    std::cout << std::setprecision(30) << number5 << std::endl;

    double number6 = static_cast<double>(number3);
    std::cout << std::setprecision(30) << number6 << std::endl;

    return 0;
}