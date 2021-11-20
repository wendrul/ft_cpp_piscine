#include "span.hpp"

Span::Span(unsigned int maxSize) : vect(), maxSize(maxSize)
{
}

Span::Span(const Span &that) : vect(that.vect), maxSize(that.maxSize)
{
}

Span::~Span()
{
}

Span &Span::operator=(const Span &that)
{
    vect = that.vect;
    maxSize = that.maxSize;

    return (*this);
}

void Span::addNumber(const int num)
{
    if (vect.size() < maxSize)
    {
        vect.push_back(num);
    }
    else
    {
        throw std::length_error(SPAN_FULL);
    }
}

void Span::addIterable(std::vector<int>::iterator start, const std::vector<int>::iterator end)
{
    if (vect.size() + (end - start) <= maxSize)
    {
        while (start != end)
        {
            vect.push_back(*start);
            start++;
        }
    }
    else
    {
        throw std::length_error(NOT_ENOUGH_SPACE_TO_ADD_VECT);
    }
}

int Span::shortestSpan()
{
    if (vect.size() < 2)
    {
        throw std::logic_error(NOT_ENOUGH_VALUES_FOR_SPAN);
    }

    std::sort(vect.begin(), vect.end());
    std::vector<int> spans(vect);
    std::rotate(spans.begin(), spans.begin() + 1, spans.end());
    std::transform(spans.begin(), spans.end(), vect.begin(), spans.begin(), std::minus<int>());
    
    return (*std::min_element(spans.begin(), spans.end() - 1));
}

int Span::longestSpan()
{
    if (vect.size() < 2)
    {
        throw std::logic_error(NOT_ENOUGH_VALUES_FOR_SPAN);
    }

    std::sort(vect.begin(), vect.end());
    
    return (vect.back() - vect.front());
}
