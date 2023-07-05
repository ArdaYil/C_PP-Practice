#include <iostream>

#include "./classes/rectangle/Rectangle.cpp"
#include "./classes/textbox/Textbox.cpp"

using namespace std;

void showRectangle(Rectangle rectangle) {
    cout << &rectangle;
}

int main() {
    auto rectangle = make_unique<Rectangle>();

    return 0;
}