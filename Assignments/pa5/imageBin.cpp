#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

// this will throw an error if you don't have the bitmap library installed
// so be sure to do that before uncommenting this #include line
#include "bitmap_image.hpp"

    int findThreshold(bitmap_image image) {
        int sum = 0;
        int count = 0;   

        const unsigned int height = image.height();
        const unsigned int width = image.width();

        for (std::size_t y = 0; y < height; ++y) {
            for (std::size_t x = 0; x < width; ++x) {
                rgb_t colour;
                image.get_pixel(x, y, colour);
                int num = colour.red;
                sum += num;
                count++;
            }
        }  
        int average = sum / count;
        return average;
    }

    void binImage(bitmap_image &image, int threshold){
        const unsigned int height = image.height();
        const unsigned int width = image.width();

        for (std::size_t y = 0; y < height; ++y) {
            for (std::size_t x = 0; x < width; ++x) {
                rgb_t colour;
                image.get_pixel(x, y, colour);
                int num = colour.red;
                if (num >= threshold) {
                    image.set_pixel(x, y, 255, 255, 255);
                } else {
                    image.set_pixel(x, y, 0, 0, 0);
                }
            }
        }
    }

int main(int argc, char *argv[]) {
    // get a string containing the image name
    // this is necessary because the bitmap_image
    // class expects a string as an argument
    std::string file_name(argv[1]);
    std::string outfile_name(argv[2]);

    // TODO:
    // your implementation of problem #4 should be done in this
    // file. Feel free to create functions etc. if you feel that
    // it will help you.
    bitmap_image image(file_name);

    image.convert_to_grayscale();

    int threshold = findThreshold(image);

    binImage(image, threshold);

    image.save_image(outfile_name);

    return 0;

}
