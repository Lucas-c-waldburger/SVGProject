#include "Shape.h"


// RECTANGLE //


void Rectangle::draw() const
{
    std::cout << R"(<rect x=")" << position.x << R"(" y=")" << position.y << R"(" width=")" << width
              << R"(" height=")" << height << R"("/>)";
}

bool Rectangle::overlaps(const Circle &r) const
{

    return false;
}


















// CIRCLE //



void Circle::draw() const
{
    std::cout << R"(<circle cx=")"  << center.x << R"(" cy=")" << center.y << R"(" r=")" << radius << R"("/>)";
}