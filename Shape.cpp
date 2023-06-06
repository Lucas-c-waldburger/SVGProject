#include "Shape.h"


// RECTANGLE //


void Rectangle::draw() const
{
    std::cout << R"(<rect x=")" << position.x << R"(" y=")" << position.y << R"(" width=")" << width
              << R"(" height=")" << height << R"("/>)";
}


// if the distance between center of circle and closest point on rectangle
// is less than circle radius squared, then overlaps
bool Rectangle::overlaps(const Circle& c) const
{
    Point rClosest = Point(std::min(std::max(c.center.x, position.x), position.x + width),
                           std::min(std::max(c.center.y, position.y), position.y + height));

    return (c.center.distanceTo(rClosest) < (c.radius * c.radius));
}

bool Rectangle::fits_in(const Rectangle& r) const
{
    return ((position.x + width) <= r.width && (position.y + height) <= r.height);
}










// CIRCLE //



void Circle::draw() const
{
    std::cout << R"(<circle cx=")"  << center.x << R"(" cy=")" << center.y << R"(" r=")" << radius << R"("/>)";
}


bool Circle::fits_in(const Rectangle& r) const
{
    Point rClosest = Point(std::min(std::max(c.center.x, position.x), position.x + width),
                           std::min(std::max(c.center.y, position.y), position.y + height));

}