#ifndef BRIQUE_H
#define BRIQUE_H
#include "rectangle.h"

/**
* Classe pour l' objet brique.
* Elle contient les donnees d' un brique et herite de rectangle.
*/

class brique: public rectangle
{
public:
    /**
    * Constructeur.
    * Initialise les donnees de la brique avec celles passees en paramentre.
    */
    brique(double x, double y, double larg, double haut, int nbCol, int type);
    /**
    * Destructeur.
    */
    virtual ~brique();
    /**
    * Methode qui retourne d_nbCol.
    */
    int nbColisions() const;
    /**
    * Methode qui retourne d_type.
    */
    int typeBrique() const;

    static const int NORMAL = 0; /**< Constante, valeur 0 correspond a une brique de type NORMAL. */
    static const int DURE = 1; /**< Constante, valeur 1 correspond a une brique de type DURE. */
    static const int MOLLE = 2; /**< Constante, valeur 2 correspond a une brique de type MOLLE. */
    static const int TUEUSE = 3; /**< Constante, valeur 3 correspond a une brique de type TUEUSE. */

private:
    int d_nbCol; /**< Nombre de collisions avant etre detruite. */
    int d_type; /**< Type de brique. */
};

#endif // BRIQUE_H
