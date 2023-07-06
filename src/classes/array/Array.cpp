

#include "Array.hpp"

#include <stdexcept>

using namespace std;

Array::Array(size_t size) {
    this->values = new int[size];
    this->size = size;
}

Array::~Array() {
    delete[] this->values;
    this->values = nullptr;
}

int& Array::operator[](size_t index) {
    if (index >= size)
        throw invalid_argument("index");

    return values[index];
}