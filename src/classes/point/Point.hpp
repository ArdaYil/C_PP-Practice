#ifndef SRC_CLASSES_POINT_H
#define SRC_CLASSES_POINT_H

class Point {
   public:
    Point(int x, int y);
    bool operator==(const Point& other) const;

   private:
    int x;
    int y;
};

#endif  // SRC_CLASSES_POINT_H