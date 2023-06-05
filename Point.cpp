#include "Point.h"

Point Point::operator+(const Point &rhs) const
{
    return Point(x + rhs.x, y + rhs.y);
}

Point Point::operator-(const Point &rhs) const
{
    return Point(x - rhs.x, y - rhs.y);
}
