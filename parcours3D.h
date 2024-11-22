#ifndef PARCOURS3D_H
#define PARCOURS3D_H

#include "parcours.h"
#include "point3D.h"
#include <cmath>
#include <iostream>

class CLparcours3D : public CLparcours {
public:
    CLparcours3D(int taille);

    void ajouterPoint(CLpoint* point) override;
    double calculDistance() const override;
    void message() const override;

private:
    int taille;
    std::vector<CLpoint3D> points;
};

#endif
