#include "square.h"

Square::Square() : side(0) {}

Square::Square(double side)
{
    setSide(side);
}

Square::~Square() {}

double Square::area()
{
    return side * side;
}

void Square::setSide(double side)
{
    if (side < 0)
    {
        throw std::invalid_argument("side must be < 0");
    }
    this->side = side;
}

double Square::getSide()
{
    return side;
}
