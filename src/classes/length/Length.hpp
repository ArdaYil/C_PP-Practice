#ifndef SRC_LENGTH_LENGTH_H
#define SRC_LENGTH_LENGTH_H

class Length {
   public:
    explicit Length(int length);

    bool operator==(const Length& second) const;
    bool operator==(int other) const;
    bool operator!=(int other) const;
    bool operator<(const Length& other) const;
    bool operator<=(const Length& other) const;
    bool operator>(const Length& other) const;
    bool operator>=(const Length& other) const;

    int getValue() const;

   private:
    int value;
};

#endif  // SRC_LENGTH_LENGTH_H