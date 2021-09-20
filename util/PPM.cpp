#include "PPM.h"
#include <iostream>
#include <fstream>

PPM::PPM(uint32_t height_, uint32_t width_, std::string filename) :
filename{filename}
{
    if(!height_)
    {
        std::cout << "NOTE: INIT IMAGE WITH 0 HEIGHT\n";
        height = 1;
    } else {
        height = height_;
    }

    if(!width_)
    {
        std::cout << "NOTE: INIT IMAGE WITH 0 WIDTH\n";
        width = 1;
    } else {
        width = width_;
    }

    //initialize pixel vector
    for(uint32_t i = 0; i < height; i++){
        pixels.push_back(std::vector<Pixel>(width));
    }
}

PPM::PPM(uint32_t height, uint32_t width) :
PPM::PPM(height, width, std::string())
{}

void PPM::setPixel(uint32_t r, uint32_t c, Pixel pix)
{
    pixels[r][c] = pix;
}

int PPM::outputImage()
{
  std::ofstream myfile;
  myfile.open (filename);
  myfile << "P3\n" << width << " " << height << "\n255" << std::endl;
  for(uint32_t i = 0; i < height; i++){
      std::cerr << "Scanline remaining " << height - i << std::endl;
      for(uint32_t j = 0; j < width; j++){
          myfile << pixels[i][j] << " ";
      }
      myfile << std::endl;
  }
  myfile.close();
  return 0;
}

PPM::~PPM()
{
    std::cout << "PPM DESTROYTED\n";
}
