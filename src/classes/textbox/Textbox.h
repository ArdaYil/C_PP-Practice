#ifndef SRC_CLASSES_TEXTBOX_H
#define SRC_CLASSES_TEXTBOX_H

#include <string>

using namespace std;

class Textbox {
   public:
    Textbox();
    explicit Textbox(const string& value);

    string getValue() const;
    void setValue(const string& value);

   private:
    string value;
};

#endif