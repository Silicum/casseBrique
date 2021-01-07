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
    raquette(double x1, double y1, double x2, double y2);
    /**
    * Destructeur.
    */
    ~raquette();
    /**
    * Methode qui change la position de la raquette vers la gauche si l' utilisateur appui sur la fleche droite.
    */
    void deplacerGauche();
    /**
    * Methode qui change la position de la raquette vers la droite si l' utilisateur appui sur la fleche droite.
    */
    void deplacerDroite();
};
#endif // RAQUETTE_H
