#pragma once
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    unsigned int length;

    T *arr;

public:
    class IndexOutOfBoundsException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Index is out of bounds.";
        }
    };
    Array();
    Array(unsigned int n);
    Array(Array<T> const &src);
    ~Array();

    Array<T> &operator=(Array<T> const &src);
    T &operator[](unsigned int i) const;

    void print() const;

    unsigned int size() const;
};


template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &arr)
{
    out << "[ ";
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        out << arr[i];
        if (i != arr.size() - 1)
            out << ", ";
    }
    out << " ]";
    return out;
}

template <typename T>
Array<T>::Array()
{
    length = 0;
    arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    std::cout<<"called\n";
    length = n;
    arr = new T[n];
}

template <typename T>
Array<T>::Array(Array<T> const &src)
{
    *this = src;
}

template <typename T>
Array<T>::~Array()
{
    delete [] arr;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &src)
{
    delete [] arr;
    length = src.length;
    arr = new T[length];
    for (unsigned int i = 0; i < length; i++)
    {
        arr[i] = src[i];
    }
    return *this;
}

template <typename T>
void Array<T>::print() const
{
    std::cout << *this << std::endl;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
    if (i < 0 || i >= length)
    {
        throw IndexOutOfBoundsException();
    }
    else
        return arr[i];
}


template <typename T>
unsigned int Array<T>::size() const
{
    return length;
}

#endif
