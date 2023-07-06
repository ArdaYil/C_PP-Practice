#ifndef SRC_LENGTH_LENGTH_H
#define SRC_LENGTH_LENGTH_H

#include <istream>
#include <ostream>

using namespace std;

class Length {
   public:
    Length() = default;
    explicit Length(int length);

    bool operator==(const Length& second) const;
    bool operator==(int other) const;
    bool operator!=(int other) const;
    bool operator<(const Length& other) const;
    bool operator<=(const Length& other) const;
    bool operator>(const Length& other) const;
    bool operator>=(const Length& other) const;
    Length operator+(const Length& other) const;
    Length& operator+=(const Length& other);
    Length& operator++();
    Length operator++(int);
    explicit operator int() const;

    int getValue() const;
    void setValue(int value);

   private:
    int value;

    friend ostream& operator<<(ostream& stream, const Length& length);
    friend istream& operator>>(istream& stream, Length& length);
};

ostream& operator<<(ostream& stream, const Length& length);
istream& operator>>(istream& stream, Length& length);

#endif  // SRC_LENGTH_LENGTH_H