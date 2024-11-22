#include "point3D.h"

CLpoint3D::CLpoint3D(double x, double y, double z) : x(x), y(y), z(z) {}

void CLpoint3D::afficherCoordo() const {
    std::cout << "Point3D(" << x << ", " << y << ", " << z << ")\n";
}

double CLpoint3D::getX() const {
    return x;
}

double CLpoint3D::getY() const {
    return y;
}

double CLpoint3D::getZ() const {
    return z;
}
