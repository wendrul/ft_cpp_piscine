#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <vector>

template <typename T>
void easyfind(T &haystack, int needle)
{
    typename T::iterator found;

    if ((found = std::find(haystack.begin(), haystack.end(), needle)) != haystack.end())
    {
        std::cout << "found at: " << found - haystack.begin() << "\n";
    }
    else
    {
        std::cerr << "not found\n";
    }
}

#endif
