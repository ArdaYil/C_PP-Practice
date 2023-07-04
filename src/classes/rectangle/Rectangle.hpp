#ifndef CLASSES_RECTANGLE_HPP
#define CLASSES_RECTANGLE_HPP

class Rectangle {
   public:
    Rectangle(int width, int height);

    int getArea();
    void draw();

    int getWidth();
    void setWidth(int width);

    int getHeight();
    void setHeight(int width);

   private:
    int width;
    int height;
};

#endif  // CLASSES_RECTANGLE_HPP