#include "Textbox.h"

#include <string>

using namespace std;

Textbox::Textbox() = default;

Textbox::Textbox(const string& value) {
    this->setValue(value);
}

string Textbox::getValue() const {
    return this->value;
}

void Textbox::setValue(const string& value) {
    this->value = value;
}