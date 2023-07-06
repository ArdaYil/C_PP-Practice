#include "Length.hpp"

#include <iostream>

using namespace std;

Length::Length(int value) { this->value = value; }

bool Length::operator==(const Length& second) const {
    return this->getValue() == second.getValue();
}

bool Length::operator==(int value) const {
    return this->value == value;
}

bool Length::operator!=(int value) const {
    return !(this->value == value);
}

bool Length::operator<(const Length& other) const {
    return this->value < other.value;
}

bool Length::operator>(const Length& other) const {
    return this->value > other.value;
}

bool Length::operator<=(const Length& other) const {
    return !(*this > other);
}

bool Length::operator>=(const Length& other) const {
    return !(*this < other);
}

Length Length::operator+(const Length& other) const {
    return Length(this->value + other.value);
}

Length& Length::operator+=(const Length& other) {
    this->setValue(this->getValue() + other.value);

    return *this;
}

Length& Length::operator++() {
    this->value++;

    return *this;
}

Length Length::operator++(int) {
    Length copy = (*this);
    operator++();

    return copy;
}

ostream& operator<<(ostream& stream, const Length& length) {
    stream << "{ Length: " << length.value << " }";
    return stream;
}

istream& operator>>(istream& stream, Length& length) {
    stream >> length.value;
    return stream;
}

inline int Length::getValue() const {
    return this->value;
}

void Length::setValue(int value) {
    this->value = value;
}