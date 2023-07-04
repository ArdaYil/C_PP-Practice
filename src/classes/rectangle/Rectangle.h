#ifndef SRC_CLASSES_RECTANGLE_H
#define SRC_CLASSES_RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {
   public:
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    Rectangle();

    int getArea();
    void draw();

    int getWidth();
    void setWidth(int width);

    int getHeight();
    void setHeight(int width);

   private:
    int width;
    int height;
    string color;
};

#endif  // CLASSES_RECTANGLE_H