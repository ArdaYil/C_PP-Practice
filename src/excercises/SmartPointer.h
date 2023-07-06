#ifndef SRC_EXCERCISES_SMARTPOINTER_H
#define SRC_EXCERCISES_SMARTPOINTER_H

class SmartPointer {
   public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer();
    int& operator*();

   private:
    int* ptr;
};

#endif  // SRC_EXCERCISES_SMARTPOINTER_H