#ifndef RAQUETTE_H
#define RAQUETTE_H
#include "rectangle.h"

/**
* Classe pour l' objet raquette.
* Elle herite de ractangle et contient la methode qui permet a l' utilisateur de le deplacer.
*/


class raquette: public rectangle
{
public:
    /**
    * Constructeur.
    * Initialise les donnees de la raquette avec celles passees en paramentre.
    */
    raquette(double x, double y, double larg, double haut);
    /**
    * Destructeur.
    */
    ~raquette();
    /**
    * Methode qui change la position de la raquette en fonction des touches de l' utilisateur.
    */
    void deplacer();
};
#endif // RAQUETTE_H
