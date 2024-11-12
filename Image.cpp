#include "Image.h"

#define BLACK 0
#define WHITE 255

Image::Image(int width, int height) {
	this->colors = new int* [height];
    for (int i = 0; i < height; i++) {
        this->colors[i] = new int[width];
    }

	this->width = width;
	this->height = height;

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			this->colors[y][x] = BLACK;
		}
	}
}

void Image::SetPixel(int x, int y, int color) {
	colors[y][x] = color;
}