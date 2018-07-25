#include "triangle.h"

Triangle::Triangle() : sideA(0), sideB(0), sideC(0) {}

Triangle::Triangle(double sideA, double sideB, double sideC)
{
    setAllSides(sideA, sideB, sideC);
}

Triangle::~Triangle() {}

bool Triangle::isCorrectTriangle(double sideA, double sideB, double sideC)
{
    return (sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA);
}

double Triangle::area()
{
    double semiperimeter = (sideA + sideB + sideC) / 2;
    return sqrt(semiperimeter * (semiperimeter - sideA) * (semiperimeter - sideB) * (semiperimeter - sideC));
}

void Triangle::setAllSides(double sideA, double sideB, double sideC)
{
    if (sideA < 0)
    {
        throw std::invalid_argument("sideA must be < 0");
    }
    if (sideB < 0)
    {
        throw std::invalid_argument("sideB must be < 0");
    }
    if (sideC < 0)
    {
        throw std::invalid_argument("sideC must be < 0");
    }
    if(!isCorrectTriangle(sideA, sideB, sideC))
    {
        throw std::invalid_argument("triangle is incorrect");
    }
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
}

double Triangle::getSideA()
{
    return sideA;
}

double Triangle::getSideB()
{
    return sideB;
}

double Triangle::getSideC()
{
    return sideC;
}

std::vector<double> Triangle::getAllSides()
{
    return std::vector<double> {sideA, sideB, sideC};
}
