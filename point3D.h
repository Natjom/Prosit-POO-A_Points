#ifndef POINT3D_H
#define POINT3D_H

#include "point.h"
#include <iostream>

class CLpoint3D : public CLpoint {
public:
    CLpoint3D(double x, double y, double z);

    void afficherCoordo() const override;
    double getX() const;
    double getY() const;
    double getZ() const;

private:
    double x, y, z;
};

#endif
