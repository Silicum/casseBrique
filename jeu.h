#ifndef JEU_H
#define JEU_H

#include <vector>
#include "balle.h"
#include "brique.h"
#include "terrain.h"
#include "raquette.h"
#include "afficheJeu.h"

/**
* Classe pour la gestion du jeu.
* Elle contient tous les objets requis pour le jeu et combine les methodes des autres classes pour le simuler.
*/


class jeu
{
public:
    /**
    * Constructeur.
    */
    jeu();
    /**
    * Methode qui initialise les briques dans d_briques.
    */
    void initBriques();
    /**
    * Methode qui fait avancer la balle.
    */
    void avancerBalle();
    /**
    * Methode qui change la direction (d_angle) de la balle si collision avec la brique en parametre est detectee
    */
    void rebondBrique(brique& b);
    /**
    * Methode qui change la direction (d_angle) de la balle si collision avec les murs du terrain est detectee
    */
    void rebondTerrain();
    /**
    * Methode qui change la direction (d_angle) de la balle si collision avec la raquette est detectee
    */
    void rebondRaquette();
    /**
    * Methode qui change la position de la raquette en fonction des touches de l' utilisateur.
    */
    void deplacerRaquette();
    /**
    * Methode qui teste le nombre des collisions dans une brique et retourne TRUE si il est 0.
    */
    bool briqueDetruit(const brique &br);
    /**
    * Methode qui utilise les autres methodes de cette classe et les methodes d' affichage de la classe en parametre pour simuler le jeu.
    */
    void loopJeu(const afficheJeu& aff);

private:
    terrain d_ter; /**< Le terrain du jeu */
    std::vector<brique> d_briques; /**< Le groupe de briques */
    raquette d_raq; /**< La raquette */
    balle d_b; /**< La balle */
};
#endif // JEU_H
