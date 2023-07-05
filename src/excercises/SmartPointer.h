#ifndef SRC_EXCERCISES_SMARTPOINTER_H
#define SRC_EXCERCISES_SMARTPOINTER_H

class SmartPointer {
   public:
    SmartPointer(int* ptr);
    ~SmartPointer();

   private:
    int* ptr;
};

#endif  // SRC_EXCERCISES_SMARTPOINTER_H