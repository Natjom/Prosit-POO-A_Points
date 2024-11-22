#include "point3D.h"

CLpoint3D::CLpoint3D(double x, double y, double z) : CLpoint2D(x, y), z(z) {}

double CLpoint3D::getZ() const {
    return z;
}

void CLpoint3D::afficherCoordo() const {
    std::cout << "Point3D(" << x << ", " << y << ", " << z << ")\n";
}

double CLpoint3D::distance(const CLpoint2D& other) const {
    const CLpoint3D* p3D = dynamic_cast<const CLpoint3D*>(&other);
    if (p3D) {
        return std::sqrt(std::pow(p3D->getX() - x, 2) + 
                         std::pow(p3D->getY() - y, 2) + 
                         std::pow(p3D->getZ() - z, 2));
    }
    return CLpoint2D::distance(other); // Appelle la méthode 2D si l'autre point n'est pas en 3D
}
