#include "Rectangle.hpp"

#include <iostream>

using namespace std;

Rectangle::Rectangle(int width, int height) {
    cout << "Creating rectangle";

    this->setWidth(width);
    this->setHeight(height);
}

int Rectangle::getArea() {
    return this->width * this->height;
}

void Rectangle::draw() {
    cout << "Drawing rectangle: "
         << "Dimensions { "
         << this->width << ", "
         << this->height << " }"
         << endl;
}

int Rectangle::getWidth() {
    return this->width;
}

void Rectangle::setWidth(int width) {
    if (this->width < 0)
        throw invalid_argument("Width cannot be less than 0");

    this->width = width;
}

int Rectangle::getHeight() {
    return this->height;
}

void Rectangle::setHeight(int height) {
    if (this->height < 0)
        throw invalid_argument("Height cannot be less than 0");

    this->height = height;
}