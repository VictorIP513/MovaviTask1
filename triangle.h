#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "ishape.h"

#include <stdexcept>
#include <vector>
#include <cmath>

class Triangle : public IShape
{
public:
    double area() override;
    void setAllSides(double sideA, double sideB, double sideC);
    std::vector<double> getAllSides();
    double getSideA();
    double getSideB();
    double getSideC();
    Triangle();
    Triangle(double sideA, double sideB, double sideC);
    ~Triangle() override;

private:
    bool isCorrectTriangle(double sideA, double sideB, double sideC);
    double sideA;
    double sideB;
    double sideC;
};

#endif // TRIANGLE_H
