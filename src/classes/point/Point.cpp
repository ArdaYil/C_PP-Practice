#include "Point.hpp"

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

bool Point::operator==(const Point& other) const {
    return this->x == other.x && this->y == other.y;
}

Point Point::operator+(const Point& other) const {
    return Point(this->x + other.x, this->y + other.y);
}

Point& Point::operator++() {
    this->x++;
    this->y++;

    return *this;
}

Point Point::operator++(int) {
    Point copy = *this;

    operator++();

    return copy;
}

int Point::getX() const {
    return this->x;
}

int Point::getY() const {
    return this->y;
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

ostream& operator<<(ostream& stream, const Point& point) {
    stream << "{ X: " << point.getX() << ", Y: " << point.getY() << " }";

    return stream;
}
