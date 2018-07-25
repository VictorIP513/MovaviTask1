#ifndef ISHAPE_H
#define ISHAPE_H

class IShape
{
public:
    double virtual area() = 0;
    virtual ~IShape();
};

#endif // ISHAPE_H
