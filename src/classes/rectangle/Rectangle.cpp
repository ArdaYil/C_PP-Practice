#include "Rectangle.h"

#include <iostream>

using namespace std;

Rectangle::Rectangle() = default;

Rectangle::Rectangle(int width, int height) {
    cout << "Creating rectangle" << endl;

    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, const string& color) : Rectangle(width, height) {
    cout << "Constructing a rectangle with color";

    this->color = color;
}

int Rectangle::getArea() {
    return width * height;
}

void Rectangle::draw() {
    cout << "Drawing rectangle: "
         << "Dimensions { "
         << width << ", "
         << height << " }"
         << endl;
}

int Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("Width cannot be less than 0");

    this->width = width;
}

int Rectangle::getHeight() {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("Height cannot be less than 0");

    this->height = height;
}
