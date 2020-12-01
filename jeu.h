#ifndef JEU_H
#define JEU_H

#include <vector>
#include "balle.h"
#include "brique.h"
#include "terrain.h"
#include "raquette.h"

class jeu
{
public:
    jeu(); //constructeur par defaut
    void initBriques();
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
    void deplacerRaquette();
    bool briqueDetruit(const brique &br) const;

private:
    terrain d_ter;
    std::vector<brique> d_briques;
    raquette d_raq;
    balle d_b;
};
#endif // JEU_H
