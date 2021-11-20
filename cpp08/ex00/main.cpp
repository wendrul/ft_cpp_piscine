#include <iostream>
#include <cstdlib>
#include "easyfind.hpp"
#include <algorithm>
#include <vector>
#include <map>
#include <deque>

void print_int(int i)
{
    std::cout << "| " << i << " |";
}

int main()
{
    std::cout << "\n=====VECT=====\n\n\n";
    
    std::vector<int> vec(10, 42);
    vec[0] = 13;
    
    std::for_each(vec.begin(), vec.end(), print_int);

    std::cout << std::endl << "\nFind 42:\n";
    easyfind<std::vector<int> >(vec, 42);
    std::cout << "\nFind 13:\n";
    easyfind<std::vector<int> >(vec, 13);
    std::cout << "\nFind 67:\n";
    easyfind<std::vector<int> >(vec, 67);

    std::cout << "\n=====DEQUE=====\n\n\n";

    std::deque<int> deq(10, -1);
    deq.push_front(9);
    
    std::for_each(deq.begin(), deq.end(), print_int);

    std::cout << std::endl << "\nFind -1:\n";
    easyfind<std::deque<int> >(deq, -1);
    std::cout << "\nFind 9:\n";
    easyfind<std::deque<int> >(deq, 9);
    std::cout << "\nFind 67:\n";
    easyfind<std::deque<int> >(deq, 67);

    return 0;
}
