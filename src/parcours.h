#ifndef PARCOURS_H
#define PARCOURS_H

#include "point2D.h"
#include <vector>
#include <iostream>

class CLparcours {
protected:
    std::vector<CLpoint2D*> points;

public:
    CLparcours() {}
    virtual ~CLparcours();

    void ajouterPoint(CLpoint2D* point);
    virtual double calculDistance() const;
    virtual void message() const = 0;
};

#endif // PARCOURS_H
