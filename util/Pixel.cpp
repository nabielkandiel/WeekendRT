#include "Pixel.h"
#include <iostream>

Pixel& Pixel::operator=(const Pixel& other)
{
 this->red = other.red;
 this->blue = other.blue;  
 this->green = other.green;
 return *this; 
}

Pixel& Pixel::operator+=(const Pixel &pix)
{
 this->red += pix.red;
 this->blue += pix.blue;  
 this->green += pix.green;
 return *this; 
}

std::ostream& operator<<(std::ostream& os, const Pixel& px)
{
    os << px.red << ' ' << px.green << ' ' << px.blue;
    return os;
}
