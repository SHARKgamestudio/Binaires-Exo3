#include "CImage.h"

#define SIZE 8

CImage::CImage(Image& image) {
	this->colors = image.colors[0][0];
	
	for (int y = 0; y < image.height; y++) {
		for (int x = 0; x < image.width; x++) {
			this->colors >>= SIZE;
			
		}
	}
	this->colors &= image.colors[0][0];
}