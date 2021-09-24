#pragma once
#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

class Fixed
{
private:
    int value;
    const static int binaryPointPos = 8;

public:
    Fixed();
    Fixed(const Fixed &src);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
    Fixed &operator=(const Fixed &other);
};

#endif
