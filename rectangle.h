#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "position.h"

/**
* Classe qui represente un rectangle dans le plan.
*/

class rectangle
{
public:
    /**
    * Constructeur.
    * Initialise les donnees du rectangle avec celles passees en paramentre.
    */
    rectangle(double x1, double y1, double x2, double y2);
    /**
    * Destructeur.
    */
    virtual ~rectangle();
    /**
    * Methode qui retourne le point haut-gauche
    */
    position pointHG() const;
    /**
    * Methode qui retourne le point bas-droite
    */
    position pointBD() const;
private:
    position d_HG; /**< Position du point haut-gauche */
    position d_BD; /**< Position du point bas-droite */
};
#endif // RECTANGLE_H
