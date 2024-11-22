#ifndef PARCOURS2D_H
#define PARCOURS2D_H

#include "parcours.h"
#include "point2D.h"
#include <cmath>
#include <iostream>

class CLparcours2D : public CLparcours {
public:
    CLparcours2D(int taille);

    void ajouterPoint(CLpoint* point) override;
    double calculDistance() const override;
    void message() const override;

private:
    int taille;
    std::vector<CLpoint2D> points;
};

#endif
