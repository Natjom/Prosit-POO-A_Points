#ifndef PARCOURS_H
#define PARCOURS_H

#include "point.h"
#include <vector>

class CLparcours {
public:
    virtual ~CLparcours() = default;

    virtual void ajouterPoint(CLpoint* point) = 0;
    virtual double calculDistance() const = 0;
    virtual void message() const = 0;
};

#endif
