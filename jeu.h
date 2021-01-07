#ifndef JEU_H
#define JEU_H

#include <vector>
#include "balle.h"
#include "brique.h"
#include "terrain.h"
#include "raquette.h"
#include "affichageWingbi.h"

/**
* Classe pour la gestion du jeu.
* Elle contient tous les objets requis pour le jeu et combine les methodes des autres classes pour le simuler.
*/


class jeu
{
public:
    /**
    * Constructeur par defaut.
    */
    jeu();
    /**
    * Methode qui initialise les briques dans d_briques aleatoirement.
    */
    void initBriques();
    /**
    * Methode qui calcule et stocke la position en Y du brique le plus bas dans d_lowestBrique.
    */
    void briquePlusBas();
    /**
    * Methode qui change la direction (d_angle) de la balle si collision verticale avec la brique en parametre est detectee, retourne FALSE si la brique est tueuse et la balle est detruite.
    */
    bool rebondBriqueVertical(brique& b);
    /**
    * Methode qui change la direction (d_angle) de la balle si collision horizontale avec la brique en parametre est detectee, retourne FALSE si la brique est tueuse et la balle est detruite.
    */
    bool rebondBriqueHorizontal(brique& b);
    /**
    * Methode qui change la direction (d_angle) de la balle si collision avec un mur droite ou gauche est detectee.
    */
    void rebondMurDG();
    /**
    * Methode qui change la direction (d_angle) de la balle si collision avec le mur en haut est detectee.
    */
    void rebondMurHaut();
    /**
    * Methode qui change la direction (d_angle) de la balle si collision avec la raquette est detectee.
    */
    void rebondRaquette();
    /**
    * Methode qui effectue la detection des collisions et les rebonds. Elle retourne FALSE si la balle est detruite ou si elle sort du terrain.
    */
    bool collision();
    /**
    * Methode qui retourne TRUE si la raquette a arrive au mur droit.
    */
    bool raquetteLimiteDroite();
    /**
    * Methode qui retourne TRUE si la raquette a arrive au mur gauche.
    */
    bool raquetteLimiteGauche();
    /**
    * Methode qui change la position de la raquette en fonction des touches de l' utilisateur.
    */
    void deplacerRaquette();
    /**
    * Methode qui utilise les autres methodes de cette classe et les methodes d' affichage de la classe en parametre pour simuler le jeu.
    */
    void loopJeu();

private:
    terrain d_ter; /**< Le terrain du jeu */
    std::vector<brique> d_briques; /**< Le groupe de briques */
    double d_lowestBrique; /**< Coordonee Y de la brique la plus bas */
    raquette d_raq; /**< La raquette */
    balle d_b; /**< La balle */
    affichageWingbi d_aff;
};
#endif // JEU_H
