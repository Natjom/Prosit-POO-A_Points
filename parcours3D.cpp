#include "parcours3D.h"

CLparcours3D::CLparcours3D(int taille) : taille(taille) {}

void CLparcours3D::ajouterPoint(CLpoint* point) {
    CLpoint3D* p = dynamic_cast<CLpoint3D*>(point);
    if (p) {
        points.push_back(*p);
    }
}

double CLparcours3D::calculDistance() const {
    double distance = 0.0;
    for (size_t i = 1; i < points.size(); ++i) {
        double dx = points[i].getX() - points[i - 1].getX();
        double dy = points[i].getY() - points[i - 1].getY();
        double dz = points[i].getZ() - points[i - 1].getZ();
        distance += std::sqrt(dx * dx + dy * dy + dz * dz);
    }
    return distance;
}

void CLparcours3D::message() const {
    std::cout << "Parcours 3D : Distance totale = " << calculDistance() << "\n";
}
