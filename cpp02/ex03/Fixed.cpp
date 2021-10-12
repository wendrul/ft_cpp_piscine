#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(const Fixed &src)
{
    *this = src;
}

Fixed::Fixed(const int value)
{
    this->value = value << binaryPointPos;
}

Fixed::Fixed(const float value)
{
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

std::ostream &operator<<(std::ostream &out, const Fixed &decimal)
{
    out << decimal.toFloat();
    return out;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    this->value = other.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed ret;
    ret.setRawBits(this->value + other.getRawBits());
    return (ret);
}
Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed ret;
    ret.setRawBits(this->value - other.getRawBits());
    return (ret);
}
Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed ret;
    ret.setRawBits((this->value << binaryPointPos) / other.getRawBits());
    return (ret);
}
Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed ret;
    ret.setRawBits((this->value * other.getRawBits()) >> binaryPointPos);
    return (ret);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->value < other.getRawBits());
}
bool Fixed::operator>(const Fixed &other) const
{
    return (this->value > other.getRawBits());
}
bool Fixed::operator>=(const Fixed &other) const
{
    return (this->value >= other.getRawBits());
}
bool Fixed::operator<=(const Fixed &other) const
{
    return (this->value <= other.getRawBits());
}
bool Fixed::operator==(const Fixed &other) const
{
    return (this->value == other.getRawBits());
}
bool Fixed::operator!=(const Fixed &other) const
{
    return (this->value != other.getRawBits());
}

Fixed &Fixed::operator++()
{
    this->value++;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed ret(*this);
    this->value++;
    return (ret);
}
Fixed &Fixed::operator--()
{
    this->value--;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed ret(*this);
    this->value--;
    return (ret);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a <= b)
        return a;
    return b;
}
const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a >= b)
        return a;
    return b;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
