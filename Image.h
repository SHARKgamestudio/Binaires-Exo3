#pragma once

class Image {
private:
	int** colors;
	int width, height;
public:
	Image(int width, int height);

	void SetPixel(int x, int y, int color);

	friend class CImage;
};