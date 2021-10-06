#pragma once
#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
private:
    int value;
    const static int binaryPointPos = 8;

public:
    Fixed();
    Fixed(const Fixed &src);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
    Fixed const &operator=(const Fixed &other);

    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;

    bool operator<(const Fixed &other) const;
    bool operator>(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

    int toInt(void) const;
    float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &decimal);

#endif
