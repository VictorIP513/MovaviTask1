#include "circle.h"

Circle::Circle() : radius(0) {}

Circle::Circle(double radius)
{
    setRadius(radius);
}

Circle::~Circle() {}

double Circle::area()
{
    return M_PI * radius * radius;
}

void Circle::setRadius(double radius)
{
    if (radius < 0)
    {
        throw std::invalid_argument("radius must be < 0");
    }
    this->radius = radius;
}

double Circle::getRadius()
{
    return radius;
}
