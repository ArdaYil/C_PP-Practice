#include <iostream>

#include "./classes/length/Length.cpp"
#include "./classes/point/Point.cpp"
#include "./classes/rectangle/Rectangle.cpp"
#include "./classes/textbox/Textbox.cpp"
#include "./excercises/SmartPointer.cpp"

using namespace std;

int main() {
    Length first{15};
    Length second{15};

    cout << boolalpha << (first < second);

    return 0;
}