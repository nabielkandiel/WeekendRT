#pragma once
#include <stdint-gcc.h>
#include <iostream>


struct Pixel{
  double red;
  double green;
  double blue;

  Pixel() :
  red(0.0), green(0.0), blue(0.0)
  {}

  Pixel(double r, double g, double b) :
  red(r), green(g), blue(b)
  {}

  Pixel(const Pixel &p) :
  red(p.red), green(p.green), blue(p.blue)
  {}

  Pixel& operator=(const Pixel& other);

  Pixel& operator+=(const Pixel &pix);
  
};

std::ostream& operator<<(std::ostream& os, const Pixel& px);