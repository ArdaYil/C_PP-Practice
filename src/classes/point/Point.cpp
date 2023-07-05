#include "Point.hpp"

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

bool Point::operator==(const Point& other) const {
    return this->x == other.x && this->y == other.y;
}