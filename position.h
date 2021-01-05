#ifndef POSITION_H
#define POSITION_H


/**
* Classe qui represente une position (x,y) dans le plan.
*/

class position
{
public:
    /**
    * Constructeur.
    * Initialise les donnees de la position avec celles passees en paramentre.
    */
    position(double x, double y);
    /**
    * Destructeur virtuel.
    */
    virtual ~position();
    /**
    * Methode qui retourne d_x
    */
    double posX() const;
    /**
    * Methode qui retourne d_y
    */
    double posY() const;

    friend class raquette;

protected:
    double d_x; /**< Coordonee x */
    double d_y; /**< Coordonee y */
};
#endif // POSITION_H
