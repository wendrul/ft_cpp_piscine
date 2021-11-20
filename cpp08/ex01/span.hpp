#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <functional>

#define SPAN_FULL "Span is full"
#define NOT_ENOUGH_SPACE_TO_ADD_VECT "Not enough space left to add this vect"
#define NOT_ENOUGH_VALUES_FOR_SPAN "There are not enough values to form a span (min 2)"

class Span
{

public:
    Span(unsigned int maxSize);
    Span(const Span &that);
    ~Span();
    Span &operator=(const Span &that);

    void addNumber(const int newNumber);
    void addIterable(std::vector<int>::iterator start, const std::vector<int>::iterator end);

    int shortestSpan();
    int longestSpan();

private:
    std::vector<int> vect;
    unsigned int maxSize;

    Span();
};

#endif
