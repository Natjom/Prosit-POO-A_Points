#include "point2D.h"
#include "point3D.h"
#include "parcours2D.h"
#include "parcours3D.h"
#include <iostream>

using namespace std;

int main() {
    CLparcours* parcours;

    // Test avec des points 2D
    parcours = new CLparcours2D();
    parcours->ajouterPoint(new CLpoint2D(0.0, 0.0));
    parcours->ajouterPoint(new CLpoint2D(3.0, 4.0));
    cout << "Distance totale en 2D : " << parcours->calculDistance() << endl;
    parcours->message();
    delete parcours;

    // Test avec des points 3D
    parcours = new CLparcours3D();
    parcours->ajouterPoint(new CLpoint3D(0.0, 0.0, 0.0));
    parcours->ajouterPoint(new CLpoint3D(1.0, 1.0, 1.0));
    cout << "Distance totale en 3D : " << parcours->calculDistance() << endl;
    parcours->message();
    delete parcours;

    return 0;
}
