#include "rectangle.h"

Rectangle::Rectangle() : width(0), height(0) {}

Rectangle::Rectangle(double width, double height)
{
    setWidth(width);
    setHeight(height);
}

Rectangle::~Rectangle() {}

double Rectangle::area()
{
    return width * height;
}

void Rectangle::setWidth(double width)
{
    if (width < 0)
    {
        throw std::invalid_argument("width must be < 0");
    }
    this->width = width;
}

void Rectangle::setHeight(double height)
{
    if (height < 0)
    {
        throw std::invalid_argument("height must be < 0");
    }
    this->height = height;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getHeight()
{
    return height;
}
