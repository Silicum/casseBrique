#ifndef AFFICHEJEU_H
#define AFFICHEJEU_H

#include "terrain.h"
#include "balle.h"
#include "brique.h"
#include "raquette.h"

/**
* Class abstraite d' affichage.
* Les classes qui gerent l' affichage graphique du jeu doivent heriter de cette classe.
*/

class afficheJeu
{
public:
    /**
    * Constructeur vide.
    */
    afficheJeu();
    /**
    * Destructeur virtuel vide.
    */
    virtual ~afficheJeu();
    /**
    * Affiche le terrain en parametre, c-a-d l' espace du jeu et les murs.
    */
    virtual void afficheTerrain(const terrain& t) const = 0;
    /**
    * Affiche la balle en parametre.
    */
    virtual void afficheBalle(const balle& b) const = 0;
    /**
    * Affiche le brique en parametre.
    */
    virtual void afficheBrique(const brique& br) const = 0;
    /**
    * Affiche la raquette en parametre.
    */
    virtual void afficheRaquette(const raquette& raq) const = 0;
};

#endif // AFFICHEJEU_H
