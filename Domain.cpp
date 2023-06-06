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

void Domain::draw()
{
    std::string positionText;

    auto writeText = [&positionText]()->std::string
    {
        return "<g transform=\"matrix(1,0,0,1,50,590)\"\n"
               "font-family=\"Arial\" font-size=\"32\">\n"
               "<text x=\"0\"y=\"0\">" + positionText + "</text>\n</g>";
    };


    // open new svg file

    // fout << HEADER << '\n'

    // for (auto& shape : s)
        // check if overlap/fits
        // set positionText to the true one 
        // fout << draw() << '\n'

    // erase last '\n'
    // fout << "</g>\n"
    
    // fout << writeText() << "\n</svg>";

}



