#include <iostream>

#include "classes/rectangle/Rectangle.hpp"

using namespace std;

int main() {
    Rectangle rectangle(10, 50);
    cout << rectangle.getArea();

    return 0;
}