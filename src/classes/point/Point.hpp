#ifndef SRC_CLASSES_POINT_H
#define SRC_CLASSES_POINT_H

#include <ostream>

using namespace std;

class Point {
   public:
    Point(int x, int y);

    bool operator==(const Point& other) const;
    Point operator+(const Point& other) const;
    Point& operator++();
    Point operator++(int);

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);

   private:
    int x;
    int y;
};

ostream& operator<<(ostream& stream, const Point& point);

#endif  // SRC_CLASSES_POINT_H