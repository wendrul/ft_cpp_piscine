#include "iter.hpp"

void    inc(int &i)
{
    i++;
}

int main()
{
    std::string str_arr[] = {"hey", "many", "words", "haha"};
    int int_arr[] = {0, 1, 2, 3, 4};

    iter(int_arr, 5, lol);
    std::cout << std::endl;
    iter(int_arr, 5, inc);
    iter(int_arr, 5, lol);
    std::cout << std::endl;
    iter(str_arr, 4, lol);
    return 0;
}
