#pragma once
#include <stdint-gcc.h>
#include <string>
#include <vector>
#include "Pixel.h"

class PPM
{
private:
    uint32_t height;
    uint32_t width;
    std::string filename;
    std::vector<std::vector<Pixel>> pixels;

public:
    PPM(uint32_t height, uint32_t width, std::string filename);
    PPM(uint32_t height, uint32_t width);

    void setPixel(uint32_t r, uint32_t c, Pixel pix);
    int outputImage();

    ~PPM();
};