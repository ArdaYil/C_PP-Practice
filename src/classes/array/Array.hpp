#ifndef SRC_CLASSES_ARRAY_H
#define SRC_CLASSES_ARRAY_H

#include <cstddef>
#include <iostream>

using namespace std;

class Array {
   public:
    explicit Array(size_t size);

    ~Array();

    int& operator[](size_t index);

   private:
    int* values;
    size_t size;
};

#endif  // SRC_CLASSES_ARRAY_H