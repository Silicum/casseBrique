#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "position.h"

/**
* Classe qui represente un rectangle dans le plan avec une position (x,y).
*/

class rectangle: public position
{
public:
    /**
    * Constructeur.
    * Initialise les donnees du rectangle avec celles passees en paramentre.
    */
    rectangle(double x, double y, double larg, double haut);
    /**
    * Destructeur.
    */
    virtual ~rectangle();
    /**
    * Methode qui retourne d_larg
    */
    double largeur() const;
    /**
    * Methode qui retourne d_haut
    */
    double hauteur() const;
private:
    double d_larg; /**< Largeur du rectangle */
    double d_haut; /**< Hauteur du rectangle */
};
#endif // RECTANGLE_H
