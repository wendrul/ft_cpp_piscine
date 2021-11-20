
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    MutantStack() : std::stack<T>(){};
    MutantStack(const MutantStack &that) : std::stack<T>(that){};
    virtual ~MutantStack(){};
    MutantStack &operator=(const MutantStack &that)
    {
        std::stack<T>::operator=(that);
        return *this;
    };

    iterator begin()
    {
        return (std::stack<T>::c.begin());
    };
    iterator end()
    {
        return (std::stack<T>::c.end());
    };

    const_iterator cbegin()
    {
        return std::stack<T>::c.cbegin();
    }
    const_iterator cend()
    {
        return std::stack<T>::c.cend();
    }
};

#endif
