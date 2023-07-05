#ifndef SRC_CLASSES_RECTANGLE_H
#define SRC_CLASSES_RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {
   public:
    Rectangle(int width, int height);
    Rectangle(const Rectangle& source) = delete;
    Rectangle(int width, int height, const string& color);

    ~Rectangle();

    int getArea() const;
    void draw() const;
    int getWidth() const;
    int getHeight() const;

    void setWidth(int width);
    void setHeight(int width);

    static int getObjectsCount();

   private:
    int width;
    int height;
    string color;

    static int objectsCount;
};

#endif  // CLASSES_RECTANGLE_H