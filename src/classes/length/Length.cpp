#include "Length.hpp"

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

int Length::getValue() const {
    return this->value;
}