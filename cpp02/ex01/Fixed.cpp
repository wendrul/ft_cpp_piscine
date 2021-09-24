#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->value = 0;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called\n";
    *this = src;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called\n";
    this->value = value << binaryPointPos;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called\n";
    this->value = roundf(value * (1 << binaryPointPos));
}

int Fixed::toInt() const
{
    return (value >> binaryPointPos);
}

float Fixed::toFloat() const
{
    return ((float)value / (float)(1 << binaryPointPos));
}

std::ostream& operator<<(std::ostream& out, const Fixed& decimal)
{
    out << decimal.toFloat();
    return out;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Assignment operator called\n";
    this->value = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->value = raw;
}

float Fixed::pow(int n, int p)
{
    int res;
    res = 1;
    for (int i = 0; i < p; i++)
    {
        res *= n;
    }
    return (res);
}
