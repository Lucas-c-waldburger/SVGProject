//
// FIGURE OUT HOW TO USE NORM2 TO EVALUATE WHETHER GIVEN POINT IS INSIDE A CIRCLE & RECTANGLE
//
#ifndef POINT_H
#define POINT_H
#include<iostream>


class Point
{
public:
    Point() : x(0), y(0) {}
    Point(int xin, int yin) : x(xin), y(yin) {}

    int norm2() const { return x*x + y*y; }

    int distanceTo(const Point& p2) const;

    Point operator+(const Point& rhs) const;
    Point operator-(const Point& rhs) const;
    int x, y;
};



std::ostream& operator<<(std::ostream& os, const Point& p)
{
    os << '(' << p.x << ',' << p.y << ')';
    return os;
};


std::istream& operator>>(std::istream& is, Point& p)
{
    is >> p.x >> p.y;
    return is;
};


#endif
