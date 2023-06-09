#include "Point.h"




int Point::distanceTo(const Point& p2) const
{
    return p2.norm2() - norm2();
}

Point Point::operator+(const Point &rhs) const
{
    return Point(x + rhs.x, y + rhs.y);
}

Point Point::operator-(const Point &rhs) const
{
    return Point(x - rhs.x, y - rhs.y);
}
