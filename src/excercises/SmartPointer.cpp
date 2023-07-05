#include "SmartPointer.h"

SmartPointer::SmartPointer(int* ptr) : ptr{ptr} {}

SmartPointer::~SmartPointer() {
    delete this->ptr;
    this->ptr = nullptr;
}
