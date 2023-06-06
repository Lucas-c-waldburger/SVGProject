#include "Domain.h"

Domain::Domain() : sizex(600), sizey(500)
{}

Domain::~Domain()
{
    for (auto& sh : s)
        delete sh;
}


void Domain::addShape(const Shape *p)
{
    s.push_back(p);
}

void Domain::draw()
{
    Rectangle domainRect = Rectangle(Point(0, 0), sizex, sizey);
    std::string positionText = "ok";
    bool textDecided = false;

    std::cout << HEADER << '\n';

    for (int i = 0; i < s.size(); i++)
    {
        if (!textDecided)
        {
            if (!s[i]->fits_in(domainRect))
            {
                positionText = "does not fit";
                textDecided = true;
            }
            else
            {
                for (int j = i + 1; j < s.size(); j++)
                {
                    if (s[i]->overlaps(*s[j]))
                    {
                        positionText = "overlap";
                        textDecided = true;
                        break;
                    }
                }
            }
        }
        s[i]->draw();
        std::cout << '\n';
    }

    std::cout << "<g transform=\"matrix(1,0,0,1,50,590)\"\n"
              << "font-family=\"Arial\" font-size=\"32\">\n"
              << "<text x=\"0\"y=\"0\">" << positionText << "</text>\n"
              <<"</g>\n</svg>";
}



