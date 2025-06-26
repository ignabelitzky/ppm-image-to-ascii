#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>

int main(int argc, char **argv) {
    if(argc < 2) {
        std::cout << "Please pass the PPM image as argument." << std::endl;
        return 1;
    } else {
        std::string density = "#./\?*-+~^";
        std::ifstream image;
        image.open(argv[1]);
        std::string type = "", width = "", height = "", RGB = "";
        image >> type >> width >> height >> RGB; 
        int w = 0, h = 0;
        std::stringstream widthstream(width);
        widthstream >> w;
        std::stringstream heightstream(height); 
        heightstream >> h;
        if(w > 200 || h > 200) {
            std::cout << "Image to big (max supported size 200x200)" << std::endl;
            return 2;
        } else {
            std::string red = "", green = "", blue = "";
            int r = 0, g = 0, b = 0;
            int avg = 0, newLine = 0;
            long unsigned int index = 0;
            while(!image.eof()) {
                image >> red >> green >> blue;
                std::stringstream redstream(red);
                std::stringstream greenstream(green);
                std::stringstream bluestream(blue);
                redstream >> r;
                greenstream >> g;
                bluestream >> b;
                avg = (r + g + b) / 3;
                index = floor(avg / (255 / density.size()));
                if(index >= density.size()) {
                    index = density.size() - 1;
                }
                std::cout << density.at(index);
                index = 0;
                ++newLine;
                if(newLine == w) {
                    std::cout << std::endl;
                    newLine = 0;
                }
            }
        }
    }
    return 0;
}
