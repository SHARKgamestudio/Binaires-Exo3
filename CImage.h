#pragma once

#include <cstdint>
#include "Image.h"

class CImage {
private:
	uint64_t colors;
public:
	CImage(Image& image);
};