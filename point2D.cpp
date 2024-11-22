#include "point2D.h"

CLpoint2D::CLpoint2D(double x, double y) : x(x), y(y) {}

void CLpoint2D::afficherCoordo() const {
    std::cout << "Point2D(" << x << ", " << y << ")\n";
}

double CLpoint2D::getX() const {
    return x;
}

double CLpoint2D::getY() const {
    return y;
}