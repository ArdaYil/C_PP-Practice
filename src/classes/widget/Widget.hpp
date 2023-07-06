

#ifndef SRC_CLASSES_WIDGET_H
#define SRC_CLASSES_WIDGET_H

class Widget {
   public:
    void enable();
    void disable();
    bool isEnabled() const;

   private:
    bool enabled;
};

#endif  // SRC_CLASSES_WIDGET_H