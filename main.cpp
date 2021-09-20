#include "util/PPM.h"
#include <iostream>

int main()
{
    uint32_t width = 256;
    uint32_t height = 256;
    PPM im(height, width, "text.ppm");

    std::cout << "Create PPM\n";

    uint32_t row = 0;
    uint32_t col = 0;

    for (int j = height-1; j >= 0; --j) {
        for (uint32_t i = 0; i < width; ++i) {
            auto r = double(i) / (width-1);
            auto g = double(j) / (height-1);
            auto b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            im.setPixel(row, col, Pixel(ir, ig, ib));
            col++;
        }
        col = 0;
        row++;
    }

    im.outputImage();

    std::cout << "hello world" << std::endl;
}