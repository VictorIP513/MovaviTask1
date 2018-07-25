#ifndef CIRCLE_H
#define CIRCLE_H

#include "ishape.h"

#include <cmath>
#include <stdexcept>

class Circle : public IShape
{
public:
    double area() override;
    void setRadius(double radius);
    double getRadius();
    Circle();
    Circle(double radius);
    ~Circle() override;

private:
    double radius;
};

#endif // CIRCLE_H
