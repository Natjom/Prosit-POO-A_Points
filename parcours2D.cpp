#include "parcours2D.h"

CLparcours2D::CLparcours2D(int taille) : taille(taille) {}

void CLparcours2D::ajouterPoint(CLpoint* point) {
    CLpoint2D* p = dynamic_cast<CLpoint2D*>(point);
    if (p) {
        points.push_back(*p);
    }
}

double CLparcours2D::calculDistance() const {
    double distance = 0.0;
    for (size_t i = 1; i < points.size(); ++i) {
        double dx = points[i].getX() - points[i - 1].getX();
        double dy = points[i].getY() - points[i - 1].getY();
        distance += std::sqrt(dx * dx + dy * dy);
    }
    return distance;
}

void CLparcours2D::message() const {
    std::cout << "Parcours 2D : Distance totale = " << calculDistance() << "\n";
}
