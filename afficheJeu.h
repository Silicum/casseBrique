#ifndef AFFICHEJEU_H
#define AFFICHEJEU_H

#include "terrain.h"
#include "balle.h"
#include "brique.h"
#include "raquette.h"
#include <vector>

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
    * Affiche les murs du terrain en parametre.
    */
    virtual void afficherMurs(const terrain& t) const = 0;
    /**
    * Affiche la balle en parametre.
    */
    virtual void afficherBalle(const balle& b) const = 0;
    /**
    * Affiche le brique en parametre.
    */
    virtual void afficherBrique(const brique& br) const = 0;
    /**
    * Affiche la raquette en parametre.
    */
    virtual void afficherRaquette(const raquette& raq) const = 0;
    /**
    * Initialise la fenetre dans laquelle on fera la representation graphique du jeu.
    */
    virtual void initFenetre(const terrain& t) const = 0;
    /**
    * Fermer la fenetre dans laquelle on fera la representation graphique du jeu.
    */
    virtual void fermerFenetre() const = 0;
    /**
    * Utilise les autres methodes pour afficher tous les objets du jeu.
    */
    virtual void affichage(const terrain& t, const balle& b, const std::vector<brique>& briques, const raquette& raq) const = 0;
};

#endif // AFFICHEJEU_H
