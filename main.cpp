#include "point2D.h"
#include "point3D.h"
#include "parcours2D.h"
#include "parcours3D.h"
#include <iostream>

using namespace std;

int main() 
{
    int pause;

    CLpoint* p1;
    CLpoint* p2;
    CLpoint* p3;
    CLparcours* parcours;

    // Création de points 2D
    p1 = new CLpoint2D(0.0, 0.0);
    p2 = new CLpoint2D(1.0, 1.0);
    p3 = new CLpoint2D(2.0, 2.0);
    parcours = new CLparcours2D(3);

    parcours->ajouterPoint(p1);
    parcours->ajouterPoint(p2);
    parcours->ajouterPoint(p3);
    
    cout << "Distance totale du parcours 2D : " << parcours->calculDistance() << endl;
    parcours->message();

    // Création de points 3D
    p1 = new CLpoint3D(0.0, 0.0, 0.0);
    p2 = new CLpoint3D(1.0, 1.0, 1.0);
    p3 = new CLpoint3D(2.0, 2.0, 2.0);
    parcours = new CLparcours3D(3);

    parcours->ajouterPoint(p1);
    parcours->ajouterPoint(p2);
    parcours->ajouterPoint(p3);

    cout << "Distance totale du parcours 3D : " << parcours->calculDistance() << endl;
    parcours->message();

    // Affichage des coordonnées
    p1->afficherCoordo();
    p2->afficherCoordo();

    cin >> pause;

    delete p1;
    delete p2;
    delete p3;
    delete parcours;

    return 0;
}
