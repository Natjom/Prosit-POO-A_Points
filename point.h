#ifndef POINT_H
#define POINT_H

class CLpoint {
public:
    virtual ~CLpoint() = default;  // Destructeur virtuel

    virtual void afficherCoordo() const = 0;  // Méthode virtuelle pour afficher les coordonnées
};

#endif
