#ifndef BALLE_H
#define BALLE_H
#include "position.h"

/**
* Classe pour l' objet balle.
* Elle contient les donnees d' une balle, herite de la classe position et contient la methode qui l' avance en fonction de sa vitesse.
*/

class balle: public position
{
public:
    /**
    * Constructeur.
    * Initialise les donnees de la balle avec celles passees en paramentre.
    */
    balle(double x, double y, double vit, double r, double angle);
    /**
    * Methode qui retourne d_vit
    */
    double vitesse() const;
    /**
    * Methode qui retourne d_r
    */
    double rayon() const;
    /**
    * Methode qui retourne d_angle
    */
    double angle() const;
    /**
    * Methode qui change la position (d_x,d_y) de la balle en fonction de sa vitesse (d_vit) et son angle (d_angle)
    */
    void avancer();
private:
    double d_vit; /**< Vitesse de la balle */
    double d_r; /**< Rayon de la balle */
    double d_angle; /**< Angle de deplacement de la balle */
};

#endif // BALLE_H
