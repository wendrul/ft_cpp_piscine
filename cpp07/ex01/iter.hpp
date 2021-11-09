#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T (*arr), int const len, void (*fun)(T &))
{
    for (int i = 0; i < len; i++)
    {
        fun(arr[i]);
    }
}

template <typename T>
void lol(T &el)
{
    std::cout << "lol this is " << el << std::endl;
}

#endif
