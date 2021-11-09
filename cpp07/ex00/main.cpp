#include "whatever.hpp"
#include <iostream>

int main()
{
    float a_f = 1.2, b_f = 1.2;
    double a_d = 4.20, b_d = 42.0;
    int a_i = 1.0, b_i = 20;

    std::cout << "float a address: " << &a_f << std::endl;
    std::cout << "float b address: " << &b_f << std::endl;
    std::cout << "min ret address: " << &min(a_f, b_f) << "\n\n";

    std::cout << "swapping vars\n";
    swap(a_d, b_d);
    std::cout << "double a: " << a_d << std::endl;
    std::cout << "double b: " << b_d << std::endl;
    std::cout << "max of doubles: " << max(a_d, b_d) << "\n\n";

    std::cout << "explicit template\n";
    std::cout << "max of ints: " << max<int>(a_i, b_i) << std::endl;
    std::cout << "max of floats (implictly casted to ints): " << max<int>(a_f, b_f) << std::endl;


    return 0;
}
