#include <iostream>
#include "Array.hpp"


template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &arr);

int main()
{
    Array<int> arr2 = Array<int>(10);
    
    
    Array<Array<int> > arr = Array<Array<int> >(10);
    
    arr.print();
    arr[0] = 4;
    arr.print();
    // arr2 = arr;
    std::cout << "\n\n";
    arr[0] = 1;
    arr.print();
    arr2.print();
    try
    {
        arr2[11] = -1;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
