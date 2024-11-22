#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
#include <cmath>

class CLpoint2D {
protected:
    double x;
    double y;

public:
    CLpoint2D(double x = 0.0, double y = 0.0);
    virtual ~CLpoint2D() {}

    double getX() const;
    double getY() const;

    virtual void afficherCoordo() const;
    virtual double distance(const CLpoint2D& other) const;
};

#endif // POINT2D_H
