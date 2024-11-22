#ifndef POINT3D_H
#define POINT3D_H

#include "point2D.h"

class CLpoint3D : public CLpoint2D {
protected:
    double z;

public:
    CLpoint3D(double x = 0.0, double y = 0.0, double z = 0.0);
    virtual ~CLpoint3D() {}

    double getZ() const;

    void afficherCoordo() const override;
    double distance(const CLpoint2D& other) const override;
};

#endif // POINT3D_H
