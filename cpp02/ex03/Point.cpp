#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(const Point &src) : x(src.x), y(src.y)
{
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &other) 
{
    if (this->x == other.getX() && this->y == other.getY())
        return *this;
    *this = Point(other.x, other.y);
    return *this;
}

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}

std::string Point::toString() const
{
    std::string ret;
    ret = "( " + std::to_string(x.toFloat()) + ", " + std::to_string(y.toFloat()) + " )";
    return ret;
}
