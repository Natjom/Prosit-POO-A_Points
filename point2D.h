#ifndef POINT2D_H
#define POINT2D_H

#include "point.h"
#include <iostream>

class CLpoint2D : public CLpoint {
public:
    CLpoint2D(double x, double y);

    void afficherCoordo() const override;
    double getX() const;
    double getY() const;

private:
    double x, y;
};

#endif
