#include <iostream>

#include "./classes/rectangle/Rectangle.cpp"
#include "./classes/textbox/Textbox.cpp"

using namespace std;

void show(const Textbox& textbox) {
    cout << textbox.getValue();
}

int main() {
    Rectangle rectangle(10, 20, "red");

    return 0;
}