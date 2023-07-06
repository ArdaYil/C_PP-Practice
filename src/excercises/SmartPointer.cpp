#include "SmartPointer.h"

SmartPointer::SmartPointer(int* ptr) : ptr{ptr} {}

SmartPointer::~SmartPointer() {
    delete this->ptr;
    this->ptr = nullptr;
}

int& SmartPointer::operator*() {
    return *ptr;
}

Length::operator int() const {
    return value;
}
