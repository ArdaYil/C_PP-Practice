#include "Rectangle.h"

#include <iostream>

using namespace std;

Rectangle::Rectangle() = default;

Rectangle::Rectangle(int width, int height) {
    objectsCount++;

    cout << "Creating rectangle" << endl;

    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, const string& color) : Rectangle(width, height) {
    cout << "Constructing a rectangle with color";

    this->color = color;
}

Rectangle::~Rectangle() {
    cout << "Destructor called";
}

int Rectangle::getArea() const {
    return width * height;
}

void Rectangle::draw() const {
    cout << "Drawing rectangle: "
         << "Dimensions { "
         << width << ", "
         << height << " }"
         << endl;
}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("Width cannot be less than 0");

    this->width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("Height cannot be less than 0");

    this->height = height;
}

int Rectangle::objectsCount = 0;

int Rectangle::getObjectsCount() {
    return Rectangle::objectsCount;
}