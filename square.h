#ifndef SQUARE_H
#define SQUARE_H

#include "ishape.h"

#include <stdexcept>

class Square : public IShape
{
public:
    double area() override;
    void setSide(double side);
    double getSide();
    Square();
    Square(double side);
    ~Square() override;

private:
    double side;
};

#endif // SQUARE_H
