#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ishape.h"

#include <stdexcept>

class Rectangle : public IShape
{
public:
    double area() override;
    void setWidth(double width);
    void setHeight(double height);
    double getWidth();
    double getHeight();
    Rectangle();
    Rectangle(double width, double height);
    ~Rectangle() override;

private:
    double width;
    double height;
};

#endif // RECTANGLE_H
