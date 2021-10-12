#pragma once
#ifndef __POINT_HPP__

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point
{
private:
    Fixed x;
    Fixed y;

public:
    Point();
    Point(const Fixed x, const Fixed y);
    Point(const Point &src);
    Point &operator=(const Point &other);
    Fixed getX() const;
    Fixed getY() const;
    std::string toString() const;
    ~Point();
};

#endif
