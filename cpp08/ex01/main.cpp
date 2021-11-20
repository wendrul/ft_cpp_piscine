#include <iostream>
#include "span.hpp"
#include <stdlib.h>
#include <ctime>
#include <time.h>

#define SIZE 10001

int rand_int()
{
    return (rand() % 999999999);
}

int main()
{
    srand(time(NULL));
    std::cout << "\n=====SUBJECT MAIN=====\n\n";

    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n=====MORE TESTS=====\n\n";

    Span beegSp = Span(SIZE);
    std::vector<int> randValues(SIZE);
    std::generate(randValues.begin(), randValues.end(), rand_int);
    beegSp.addIterable(randValues.begin(), randValues.end());
    std::cout << "Shortest span in random " << SIZE << " values vect is: " << beegSp.shortestSpan() << std::endl;
    std::cout << "Longest span in random " << SIZE << " values vect is: " << beegSp.longestSpan() << std::endl;

    return 0;
}
