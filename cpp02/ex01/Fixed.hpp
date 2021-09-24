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
    Fixed &operator=(const Fixed &other);
    std::ostream& operator<<(std::ostream &out);
    int toInt(void) const;
    float toFloat(void) const;
    float pow(int n, int p);
};

std::ostream& operator<<(std::ostream &out, const Fixed& decimal);


#endif
