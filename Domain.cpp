#include "Domain.h"

Domain::Domain() : sizex(600), sizey(500)
{}

Domain::~Domain(void)
{
    for (auto& sh : s)
        delete sh;
}




void Domain::addShape(const Shape *p)
{
    s.push_back(p);
}



