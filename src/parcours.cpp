#include "parcours.h"

CLparcours::~CLparcours() {
    for (CLpoint2D* point : points) {
        delete point;
    }
}

void CLparcours::ajouterPoint(CLpoint2D* point) {
    points.push_back(point);
}

double CLparcours::calculDistance() const {
    double totalDistance = 0.0;

    for (size_t i = 1; i < points.size(); ++i) {
        totalDistance += points[i - 1]->distance(*points[i]);
    }

    return totalDistance;
}
